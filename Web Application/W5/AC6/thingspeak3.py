from flask import Flask, render_template

app = Flask(__name__)

# Route to the home page
@app.route('/')
def home():
    return render_template('trial4.html')

if __name__ == '__main__':
    app.run(debug=True)
