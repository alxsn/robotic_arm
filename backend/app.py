from flask import Flask, request, send_from_directory
import serial
import os

app = Flask(__name__, static_folder='../frontend')

# Mude a porta conforme seu sistema (ex: COM3 no Windows, /dev/ttyUSB0 no Linux)
#arduino = serial.Serial('COM3', 9600)  

@app.route('/')
def index():
    return send_from_directory(app.static_folder, 'index.html')

@app.route('/set_angle', methods=['POST'])
def set_angle():
    data = request.json
    #command = f"{data['servo1']},{data['servo2']},{data['servo3']}\n"
    #arduino.write(command.encode())
    return 'OK'

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)
