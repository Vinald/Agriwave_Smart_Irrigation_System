# from flask import Flask, render_template, request
# import joblib
# import pandas as pd
# from sklearn.preprocessing import MinMaxScaler

# app = Flask(__name__)
# model = joblib.load('/home/beijuka/INTERNSHIP/Assignment/CAPSTONE FARM PROJECT/RFC_model.joblib')

# # Load the CropType mapping for one-hot encoding
# crop_type_mapping = pd.read_csv('CAPSTONE FARM PROJECT/CropType_mapping.csv')
# crop_type_mapping = crop_type_mapping.set_index('CropType')['Label'].to_dict()

# @app.route('/')
# def index():
#     return render_template('index.html')

# @app.route('/predict', methods=['POST'])
# def predict():
#     crop_days = float(request.form['crop_days'])
#     soil_moisture = float(request.form['soil_moisture'])
#     temperature = float(request.form['temperature'])
#     crop_type = request.form['crop_type']

#     # Perform one-hot encoding for crop_type
#     encoded_crop_type = crop_type_mapping.get(crop_type, -1)
#     if encoded_crop_type == -1:
#         return render_template('index.html', error_message="Invalid crop type entered!")


#     # # Create an array for one-hot encoded CropType features
#     # num_crop_types = len(crop_type_mapping)  # Number of different crop types
#     # one_hot_encoded_crop_type = [0] * num_crop_types
#     # one_hot_encoded_crop_type[encoded_crop_type] = 1

#     # Create an array for one-hot encoded CropType features
#     num_crop_types = len(crop_type_mapping)
#     one_hot_encoded_crop_type = [0] * num_crop_types
#     one_hot_encoded_crop_type[encoded_crop_type] = 1

#     # Combine all input features and scale them
#     # input_features = [[crop_days, soil_moisture, temperature, encoded_crop_type]]
#     input_features = [crop_days, soil_moisture, temperature] + one_hot_encoded_crop_type
#     scaler = MinMaxScaler(feature_range=(0, 1))
#     input_features_scaled = scaler.fit_transform(input_features)


#     # Make the prediction
#     prediction = model.predict(input_features_scaled)

#     # Convert the prediction to a human-readable label
#     if prediction == 0:
#         result = "No irrigation needed"
#     else:
#         result = "Irrigation needed"

#     return render_template('index.html', prediction=result)

# if __name__ == '__main__':
#     app.run(debug=True, port=5001)


from flask import Flask, render_template, request
import joblib
import pandas as pd
from sklearn.preprocessing import MinMaxScaler

app = Flask(__name__)
model = joblib.load('/home/beijuka/INTERNSHIP/Assignment/CAPSTONE FARM PROJECT/RFC_model.joblib')

# Load the CropType mapping for one-hot encoding
crop_type_mapping = pd.read_csv('CAPSTONE FARM PROJECT/CropType_mapping.csv')
crop_type_mapping = crop_type_mapping.set_index('CropType')['Label'].to_dict()

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/predict', methods=['POST'])
def predict():
    crop_days = float(request.form['crop_days'])
    soil_moisture = float(request.form['soil_moisture'])
    temperature = float(request.form['temperature'])
    crop_type = request.form['crop_type']

    # Perform one-hot encoding for crop_type
    encoded_crop_type = crop_type_mapping.get(crop_type, -1)
    if encoded_crop_type == -1:
        return render_template('index.html', error_message="Invalid crop type entered!")

    # Create an array for one-hot encoded CropType features
    num_crop_types = len(crop_type_mapping)
    one_hot_encoded_crop_type = [0] * num_crop_types
    one_hot_encoded_crop_type[encoded_crop_type] = 1

    # Combine all input features and scale them
    input_features = [crop_days, soil_moisture, temperature] + one_hot_encoded_crop_type
    scaler = MinMaxScaler(feature_range=(0, 1))
    input_features_scaled = scaler.fit_transform([input_features])  # Convert to 2D array

    # Make the prediction
    prediction = model.predict(input_features_scaled)

    # Convert the prediction to a human-readable label
    if prediction == 0:
        result = "No irrigation needed"
    else:
        result = "Irrigation needed"

    return render_template('index.html', prediction=result)

if __name__ == '__main__':
    app.run(debug=True, port=5001)


