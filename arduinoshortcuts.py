""" Code for pc side to receive data from Arduino and shutdown pc when data is 'Shutdown'. """
""" Same as in the Arduino code, you can add more commands to be executed on the pc side."""

import serial
import time

arduino_port = 'COMx' # Repllace with your COMx port, you can check it in the device manager

try:
  ser = serial.Serial(arduino_port, 9600)

  while True:    
    data = ser.readline().decode('utf-8').rstrip()
    time.sleep(1)

    if data == 'Shutdown':
      import os
      os.system("shutdown /s /t 5")
      ser.close()
      break


except serial.SerialException as e:
  print("Error connecting to Arduino:", e)

except Exception as e:
  print("Error:", e)