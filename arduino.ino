/* This code is for a single button, you can add more buttons and shortcuts */

const int buttonPin = 2; // Button connected to pin 2, active LOW
const int buttonPin2 = 3; // Button connected to pin 3, active LOW
void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) { 
    Serial.println("Shutdown"); // Send "Shutdown" message to PC
    delay(500); // Debounce 
  }
  int buttonState2 = digitalRead(buttonPin2);
  if (buttonState2 == LOW) { 
    Serial.println("Reboot"); // Send "Reboot" message to PC
    delay(500); // Debounce 
  }
}