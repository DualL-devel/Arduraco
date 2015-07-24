#include <XpressNet.h>

XpressNetClass XpressNet;


#define XNetAddress 30
#define XNetSRPin 3

#define interval 500

short geschwindigkeit;
short eingabe;
short aktuellerZug = 3; 
long previousMillisA = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Start");
  XpressNet.start(XNetAddress, XNetSRPin);
  XpressNet.setPower(csNormal);
}

void loop() {
  XpressNet.receive();
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillisA > interval) {
    previousMillisA = currentMillis;
    
    if(Serial.available()) {
      eingabe = Serial.parseInt();
      if(eingabe < -100 || eingabe > 100)
      {
        Serial.print("Neuer Zug: ");
        while(!Serial.available()){};
        aktuellerZug = Serial.parseInt();
        Serial.println(aktuellerZug);
      }
      else
      {
        Serial.print(eingabe);
        geschwindigkeit = eingabe;
        if(geschwindigkeit <= 100 && geschwindigkeit >= -100)
        {
          if(geschwindigkeit < 0)
          {
            geschwindigkeit = map(geschwindigkeit, 0, -100, -127, -1);
          }
          if(geschwindigkeit > 0)
          {
            geschwindigkeit = map(geschwindigkeit, 0, 100, 1, 127);
          }
          Serial.print(" --> ");
          Serial.println(geschwindigkeit);
          
          int high = aktuellerZug / 10;
          int low = aktuellerZug % 10;
          XpressNet.setLocoDrive(high, low, 0x03, geschwindigkeit);
        }
      }
    } 
   }
   
}
