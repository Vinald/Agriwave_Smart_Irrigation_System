# sensor_data/routes.py
from flask import Blueprint, render_template
from .models import SensorData

sensor_data_bp = Blueprint('sensor_data', __name__)

# Placeholder data (replace this with real-time data)
placeholder_data = [
    SensorData('2023-08-11 08:00:00', 25.3, 0.6),
    SensorData('2023-08-11 08:15:00', 25.5, 0.7),
    # Add more placeholder data...
]

@sensor_data_bp.route('/get_latest_data', methods=['GET'])
def get_latest_data():
    # Simulate fetching the latest data (replace this with real-time data)
    latest_data = placeholder_data[-1]
    return render_template('dashboard.html', latest_data=latest_data)
