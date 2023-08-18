from flask import Flask, render_template, jsonify
import requests

app = Flask(__name__)

THINGSPEAK_CHANNEL_ID = "2243569"
THINGSPEAK_READ_API_KEY = "XRTPJU1HILDRJAP2"

'''@app.route('/')
def index():
    data = fetch_data()
    return render_template('thingspeak_trial2.html', data=data)'''

@app.route('/')
def index():
    return render_template('thingspeak_trial2.html')

@app.route('/get_data')
def get_data():
    data = fetch_data()
    return jsonify(data)


def fetch_data():
    url = f'https://api.thingspeak.com/channels/{THINGSPEAK_CHANNEL_ID}/feeds.json?api_key={THINGSPEAK_READ_API_KEY}&results=10'
    response = requests.get(url)
    data = response.json()
    feeds = data.get('feeds', [])
    return feeds

if __name__ == '__main__':
    app.run(debug=True)
