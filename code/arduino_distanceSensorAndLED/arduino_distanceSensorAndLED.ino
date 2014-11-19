/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor 
 
 This example code is in the public domain.
 */

// digital pin 2 has a distance sensor attached to it. Give it a name:
int distanceSensor = 2;
int ledPin =  13;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(distanceSensor, INPUT);
   pinMode(ledPin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int sensorState = !digitalRead(distanceSensor);
  // print out the state of the button:
  Serial.println(sensorState);
   
  if (sensorState == 0 ) {     
    // turn LED on:    
    digitalWrite(ledPin, LOW);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, HIGH); 
  }
  
  
  delay(1);        // delay in between reads for stability
}
