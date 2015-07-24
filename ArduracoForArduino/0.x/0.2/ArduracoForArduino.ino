#include <XpressNet.h>
XpressNetClass XpressNet;


#define XNetAddress 30
#define XNetSRPin 3

#define interval 500

short geschwindigkeit;
short eingabe;
short zug; 
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
      }
    }
    
   }
   XpressNet.setLocoDrive(0x00, 0x03, 0x03, geschwindigkeit);
}
