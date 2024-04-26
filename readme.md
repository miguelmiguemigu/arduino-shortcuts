# Arduino Shortcuts
Works on arduinos which don't have HID support,
serial is used for communication. Tested on Arduino Nano and Windows 10/11.

## Setup
Just download all the files, then in arduinoshortcuts.py change the arduino port (COMx) and  
in run.bat change the paths.
I suppose you'd want it to run on startup, .bat script which  
 runs the
python code in background,  needs to be added to task scheduler to run on startup/login.

## Usage
When you download the code as is, and just change the paths and COMx the pc shutsdown after 5 seconds when a button on pin 2 is pressed.
It's easy to add more buttons - shortcuts, just add the pin and message in arduino.ino and then make coresponding task to do in arduinoshortcuts.py.

## Zero electricity consumption
Arduino connected to a bigger circuit which controls power for the pc, meaning your pc will be turned off and disconnected from the power until you press a button and turned off when you press other button (or same button again depending on your liking).  
***Circuit coming soon...***

***For any questions, contact info is in my profile's readme.***

$$

v = 0,157 m/s * π rad/s * sqrt(1 - (0,025 m/0,05 m)^2) = 0,1 m/s

$$


$$

  
$$