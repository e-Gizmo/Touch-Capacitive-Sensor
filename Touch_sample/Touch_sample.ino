/*
  e-Gizmo Touch sensor module
  
  This example code reads a digital input on D2,
  then prints the result to the serial monitor.

  Codes by
  e-Gizmo Mechtronix Central
  http://www.e-gizmo.com
  August 10,2017
 */

// pins assignment
int OUTPUT_PIN = 2;


void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // set D2 on an input mode
  pinMode(OUTPUT_PIN, INPUT);
}

void loop() {
  // read the input D2 pin
  int OUTPUT_STATE = digitalRead(OUTPUT_PIN);
  // print out the result
  Serial.println(OUTPUT_STATE);
  delay(1);        // delay 
}




