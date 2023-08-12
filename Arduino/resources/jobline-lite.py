import joblib
model = joblib.load('RFC_model.joblib')

import tensorflow as tf

# Convert the model
converter = tf.lite.TFLiteConverter.from_sklearn(model)
tflite_model = converter.convert()

# Save the TFLite model
with open('RFC_model.tflite', 'wb') as f:
    f.write(tflite_model)

def