# sensor_data/models.py
class SensorData:
    def __init__(self, timestamp, temperature, soil_moisture,light_intesity):
        self.timestamp = timestamp
        self.temperature = temperature
        self.soil_moisture = soil_moisture
        self.light_intesity = light_intesity
