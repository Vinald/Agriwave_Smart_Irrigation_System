from flask import Flask, render_template, request
from sklearn.preprocessing import MinMaxScaler, StandardScaler, LabelEncoder
from sklearn.linear_model import LinearRegression
import pandas as pd
import joblib

app = Flask(__name__)
model = joblib.load('RFC_model.joblib')
scaler_new = joblib.load('min_max_scaler.joblib')

@app.route('/')
def home():
    return render_template('capstone.html')


@app.route('/', methods=['POST'])
def predict():
    if request.method == 'POST':
        # Retrieve form data
        CropDays = float(request.form['CropDays'])
        temperature = float(request.form['temperature'])
        SoilMoisture = float(request.form['SoilMoisture'])
        CropType = request.form['CropType']

        Crop = crop_determiner(CropType)

        features = pd.DataFrame({'CropType':[Crop],'CropDays': [CropDays],'SoilMoisture': [SoilMoisture],'temperature': [temperature]})
        
        features = scaler_new.transform(features)
        try:
            output = model.predict(features)
            
            prediction_text = "Irrigation" if output[0] == 1 else "No Irrigation"

            return render_template('capstone.html', prediction_text=prediction_text)
        except ValueError as e:
            # Handle the ValueError here (e.g., provide a meaningful error message to the user)
            return "Error: {}".format(str(e))
            # Perform your prediction or processing here (not implemented in this example)
    else:
        # Display the initial form
        return render_template('capstone.html', prediction_text='')
    
def crop_determiner(CropType):   
        if CropType == 'Wheat':
            Crop = 0
        elif CropType =='Groundnuts':
            Crop = 1
        elif CropType =='Garden Flower':
            Crop =2
        elif CropType =='Maize':
            Crop = 3
        elif CropType =='Paddy':
            Crop = 4
        elif CropType =='Potato':
            Crop = 5
        elif CropType =='Pulse':
            Crop = 6
        elif CropType =='Sugarcane':
            Crop = 7
        elif CropType =='Coffee':
            Crop = 8
        return Crop



if __name__ == '__main__':
    app.run(debug=True)


































