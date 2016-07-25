#include <Smartcar.h>

SR04 sensor1, sensor2;
const int TRIGGER_1 = 6; // Χρησιμοποιήστε τα pin που θέλετε
const int ECHO_1 = 7; 
const int TRIGGER_2 = A2;
const int ECHO_2 = A3;

void setup() {
  Serial.begin(9600);
  sensor1.attach(TRIGGER_1,ECHO_1);
  sensor2.attach(TRIGGER_2,ECHO_2);
}

void loop() {
}
