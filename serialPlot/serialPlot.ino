/*
  Analog input, analog output, serial output
 
 Reads an analog input pin, maps the result to a range from 0 to 255
 and uses the result to set the pulsewidth modulation (PWM) of an output pin.
 Also prints the results to the serial monitor.
 
 The circuit:
 * potentiometer connected to analog pin 0.
   Center pin of the potentiometer goes to the analog pin.
   side pins of the potentiometer go to +5V and ground
 * LED connected from digital pin 9 to ground
 
 created 29 Dec. 2008
 modified 9 Apr 2012
 by Tom Igoe
 
 This example code is in the public domain.
 
 */

// These constants won't change.  They're used to give names
// to the pins used:
const int analogInPin1 = A0;  // Analog input pin that the potentiometer is attached to
const int analogInPin2 = A1;  // Analog input pin that the potentiometer is attached to
const int analogInPin3 = A2;  // Analog input pin that the potentiometer is attached to
const int analogInPin4 = A3;  // Analog input pin that the potentiometer is attached to
const int analogInPin5 = A4;  // Analog input pin that the potentiometer is attached to
const int analogInPin6 = A5;  // Analog input pin that the potentiometer is attached to

const int analogInPin7 = A6;  // Analog input pin that the potentiometer is attached to
const int analogInPin8 = A7;  // Analog input pin that the potentiometer is attached to
const int analogInPin9 = A8;  // Analog input pin that the potentiometer is attached to
const int analogInPin10 = A9;  // Analog input pin that the potentiometer is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)

void serialprint(String chan, int value);

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
 analogReference(EXTERNAL); 
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin1);            
  serialprint("q",sensorValue);
  
  sensorValue = analogRead(analogInPin2);            
  serialprint("w",sensorValue);
   /*
  sensorValue = analogRead(analogInPin3);            
  serialprint("c",sensorValue);
  
  sensorValue = analogRead(analogInPin4);            
  serialprint("d",sensorValue);
  
  sensorValue = analogRead(analogInPin5);            
  serialprint("e",sensorValue);
  
  sensorValue = analogRead(analogInPin6);            
  serialprint("f",sensorValue);
  
  sensorValue = analogRead(analogInPin7);            
  serialprint("g",sensorValue);
  
  sensorValue = analogRead(analogInPin8);            
  serialprint("h",sensorValue);
  
  sensorValue = analogRead(analogInPin9);            
  serialprint("i",sensorValue);
  
  sensorValue = analogRead(analogInPin10);            
  serialprint("j",sensorValue);
  
  delay(100);*/
  delay(2);
}

void serialprint(String chan, int value){
Serial.print("{TIMEPLOT:");
Serial.print(chan);
Serial.print("|data|C");
Serial.print(chan);
Serial.print("|T|");
Serial.print(value);
Serial.println("}"); 
  
}


