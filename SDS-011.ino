#include <SDS011.h>

SDS011 sds;
float p25, p10;

void setup() {
  Serial.begin(9600)
  sds.begin(3,4);

}

void loop() {
  Serial.wtire("P2.5", + String(p25) +" | " + "P10: " + String(p10) + "\n")
  delay(1000);
}
