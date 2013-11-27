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
#define PIEZOTHRESHOLD 350  // analog threshold for piezo sensing
#define PADNUM 4            // number of pads
#define DELAY_TIME 180

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
          Keyboard.press('q');
          delay(DELAY_TIME);
          Keyboard.releaseAll();
      }
      if(analogRead(1) > 250){
        //w
          digitalWrite(LEDPIN,HIGH);  // indicate we're sending MIDI data
//          Serial.press("boton: 6");
//          Serial.print("valor: ");
//          Serial.println(val);
          digitalWrite(LEDPIN,LOW);
          Keyboard.press('w'); 
          delay(DELAY_TIME);
          Keyboard.releaseAll();
      }
      if(analogRead(2) > 400){
          digitalWrite(LEDPIN,HIGH);  // indicate we're sending MIDI data
//          Serial.print("boton: 7");
//          Serial.print("valor: ");
//          Serial.println(val);
          digitalWrite(LEDPIN,LOW);
          Keyboard.press('e');
          delay(DELAY_TIME);
          Keyboard.releaseAll();
      }
      if(analogRead(3) > 250){
          digitalWrite(LEDPIN,HIGH);  // indicate we're sending MIDI data
//          Serial.print("boton: 8");
//          Serial.print("valor: ");
//          Serial.println(val);
          digitalWrite(LEDPIN,LOW);
          Keyboard.press('r');
          delay(DELAY_TIME);
          Keyboard.releaseAll();
      }
  } 
}
