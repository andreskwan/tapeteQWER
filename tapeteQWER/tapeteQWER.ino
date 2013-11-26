/*
 * Ardrumo sketch
 *
 * Use with the Ardrumo software here:
 * http://code.google.com/p/ardrumo/
 * This is designed to let an Arduino act as a drum machine
 * in GarageBand (sorry, Mac OS X only).
 */

#define LEDPIN     13       // status LED pin
#define KEYPIN     12       // Send Keyboard strucks
#define PIEZOTHRESHOLD 300  // analog threshold for piezo sensing
#define PADNUM 6            // number of pads
int val;

void setup() {
  pinMode(LEDPIN, OUTPUT);
  pinMode(KEYPIN, INPUT);
  Keyboard.begin();
  //Serial.begin(57600);   // set serial output rate
}

void loop() {
  // Loop through each piezo and send data
  // on the serial output if the force exceeds
  // the piezo threshold
  if(digitalRead(KEYPIN) == HIGH){
      if(analogRead(0) > PIEZOTHRESHOLD){
          digitalWrite(LEDPIN,HIGH);  // indicate we're sending MIDI data
//          Serial.print("boton: 5");
//          Serial.print("valor: ");
//          Serial.println(val);
          digitalWrite(LEDPIN,LOW);
          Keyboard.print("q");
      }
      if(analogRead(1) > PIEZOTHRESHOLD){
          digitalWrite(LEDPIN,HIGH);  // indicate we're sending MIDI data
//          Serial.print("boton: 6");
//          Serial.print("valor: ");
//          Serial.println(val);
          digitalWrite(LEDPIN,LOW);
         Keyboard.print("w"); 
      }
      if(analogRead(2) > PIEZOTHRESHOLD){
          digitalWrite(LEDPIN,HIGH);  // indicate we're sending MIDI data
//          Serial.print("boton: 7");
//          Serial.print("valor: ");
//          Serial.println(val);
          digitalWrite(LEDPIN,LOW);
          Keyboard.print("e");
      }
      if(analogRead(3) > PIEZOTHRESHOLD){
          digitalWrite(LEDPIN,HIGH);  // indicate we're sending MIDI data
//          Serial.print("boton: 8");
//          Serial.print("valor: ");
//          Serial.println(val);
          digitalWrite(LEDPIN,LOW);
          Keyboard.print("r");
      }
  } 
}
