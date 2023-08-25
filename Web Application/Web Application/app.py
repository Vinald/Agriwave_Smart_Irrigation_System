import sys
import os

# Embedded project root directory to the Python path
sys.path.append(os.path.dirname(os.path.abspath(__file__)))
# from app import database
from flask import Flask, render_template, request, redirect, url_for, jsonify
from flask_sqlalchemy import SQLAlchemy
from flask_login import UserMixin, login_user, LoginManager, login_required, logout_user, current_user
from flask_wtf import FlaskForm
from wtforms import StringField, PasswordField, SubmitField, FloatField, SelectField
from wtforms.validators import InputRequired, Length, ValidationError
from flask_bcrypt import Bcrypt
import pandas as pd
import joblib
from firebase import firebase
import requests


#Instantiating with the Flask class
app = Flask(__name__)

app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///database.db'
app.config['SECRET_KEY'] = 'thisisasecretkey'

db = SQLAlchemy(app)
bcrypt = Bcrypt(app)


login_manager = LoginManager()
login_manager.init_app(app)
login_manager.login_view = 'login'


model = joblib.load('RFC_model.joblib')
scaler = joblib.load('min_max_scaler.joblib')

# Label encoder for crop types
label_encoder = {
    "Wheat": 0,
    "Groundnuts": 1,
    "Garden Flower": 2,
    "Maize": 3,
    "Paddy": 4,
    "Potato": 5,
    "Pulse": 6,
    "Sugarcane": 7,
    "Coffee": 8
}


# User model
class User(db.Model, UserMixin):
    id = db.Column(db.Integer, primary_key=True)
    username = db.Column(db.String(20), nullable=False, unique=True)
    password = db.Column(db.String(80), nullable=False)


# Login and registration forms
class LoginForm(FlaskForm):
    username = StringField(validators=[InputRequired(), Length(min=4, max=20)], render_kw={"placeholder": "Username"})
    password = PasswordField(validators=[InputRequired(), Length(min=8, max=20)], render_kw={"placeholder": "Password"})
    submit = SubmitField('Login')


class RegisterForm(FlaskForm):
    username = StringField(validators=[InputRequired(), Length(min=4, max=20)], render_kw={"placeholder": "Username"})
    password = PasswordField(validators=[InputRequired(), Length(min=8, max=20)], render_kw={"placeholder": "Password"})
    submit = SubmitField('Register')

    def validate_username(self, username):
        existing_user_username = User.query.filter_by(username=username.data).first()
        if existing_user_username:
            raise ValidationError('That username already exists. Please choose a different one.')


# Home route
@app.route('/')
def home():   
    return render_template('home.html')


# Login route
@app.route('/login', methods=['GET', 'POST'])
def login():
    if current_user.is_authenticated:
        return redirect(url_for('dashboard'))

    form = LoginForm()
    if form.validate_on_submit():
        user = User.query.filter_by(username=form.username.data).first()
        if user and bcrypt.check_password_hash(user.password, form.password.data):
            login_user(user)
            return redirect(url_for('dashboard'))
    return render_template('login.html', form=form)


# Dashboard route
@app.route('/dashboard', methods=['GET', 'POST'])
@login_required
def dashboard():
    return render_template('dashboard.html')


# Logout route
@app.route('/logout', methods=['GET', 'POST'])
@login_required
def logout():
    logout_user()
    return redirect(url_for('home'))


# Registration route
@app.route('/register', methods=['GET', 'POST'])
def register():
    if current_user.is_authenticated:
        return redirect(url_for('dashboard'))

    form = RegisterForm()
    if form.validate_on_submit():
        hashed_password = bcrypt.generate_password_hash(form.password.data).decode('utf-8')
        new_user = User(username=form.username.data, password=hashed_password)
        db.session.add(new_user)
        db.session.commit()
        return redirect(url_for('login'))

    return render_template('register.html', form=form)


# Prediction route
@app.route('/predict', methods=['GET', 'POST'])
@login_required
def predict():
    if request.method == 'POST':
        try:
            # Retrieve form data
            CropType = request.form['CropType']
            CropDays = float(request.form['CropDays'])
            temperature = float(request.form['temperature'])
            SoilMoisture = float(request.form['SoilMoisture'])

            # label encoder to convert CropType to a numeric value
            Crop = label_encoder.get(CropType, -1)
            if Crop == -1:
                return "Invalid CropType"

            # Transform features for prediction
            features = pd.DataFrame({
                'CropType': [Crop],
                'CropDays': [CropDays],
                'SoilMoisture': [SoilMoisture],
                'temperature': [temperature]
            })
            features = scaler.transform(features)
            # Make prediction using the model
            prediction = model.predict(features)
            prediction_text = outputer(prediction)
            return render_template('predict_result.html', prediction_text=prediction_text)
        except ValueError as e:
            # Handling the ValueError here
            return "Error: {}".format(str(e))
    else:
        return render_template('predict.html', prediction_text='')


# Route for the real-time visualization
@app.route('/visualization')
def visualization():

    return render_template('visualization.html')


@login_manager.user_loader
def load_user(user_id):
    # Loading a user based on the user_id
    return User.query.get(int(user_id))


@app.route('/moisture')
def moisture():
    return render_template('moisture.html')


@app.route('/temperature')
def temperature():
    return render_template('temperature.html')


@app.route('/light')
def light():
    return render_template('light.html')


@app.route('/pump')
def pump():
    return render_template('pump.html')


# Retrieving realtime data from the firebase database.
FIREBASE_URL = "https://capstone-trial-46d33-default-rtdb.firebaseio.com/sensor_readings"


@app.route('/realtime_database')
def realtime_database():
    return render_template('trial4.html')


@app.route('/get_latest_data')
def get_latest_data():
    fb = firebase.FirebaseApplication(FIREBASE_URL, None)
    result = fb.get('/sensor_readings', None)

    if result:
        latest_key = max(result.keys())
        latest_distance = result[latest_key]['Distance']
        return jsonify({'timestamp': latest_key, 'distance': latest_distance})
    else:
        return jsonify({'timestamp': 'N/A', 'distance': 'N/A'})

# sends data to the ESP32
@app.route('/send', methods=['GET', 'POST'])
def send():
    if request.method == 'POST':
        crop_days = request.form.get('cropDays')  # Access the crop days input
        crop_type = request.form.get('selectType')  # Access the crop type input

        # You can now use crop_days and crop_type as needed.
        # For example, you can print them:
        print("Received crop days:", crop_days)
        print("Received crop type:", crop_type)

        # Send data to ESP32
        esp32_url = "http://192.168.246.35/send_data"
        response = requests.post(esp32_url, data={'cropDays': crop_days, 'cropType': crop_type})

        if response.status_code == 200:
            print("Data sent successfully to ESP32")
        else:
            print(f"Failed to send data to ESP32. HTTP response code: {response.status_code}")

    return render_template('send.html')


# Function to convert model output to human-readable prediction labels
def outputer(output):
    if output[0] == 0:
        new_output = "Not irrigating"
    elif output[0] == 1:
        new_output = "Irrigating"
    return new_output


# Run the app
if __name__ == '__main__':
    with app.app_context():
        db.create_all() 
    app.run(debug=True, host='0.0.0.0', port=5000)




