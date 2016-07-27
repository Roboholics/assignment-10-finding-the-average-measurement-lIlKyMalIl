#include <Smartcar.h>

SR04 sensor1, sensor2;
const int TRIGGER_1 = A0; // Χρησιμοποιήστε τα pin που θέλετε
const int ECHO_1 = A1;
const int TRIGGER_2 = A2;
const int ECHO_2 = A3;
int sum1 = 0;
int sum2 = 0;
int counter1 = 0;
int counter2 = 0;
 
void setup() {
  Serial.begin(9600);
  sensor1.attach(TRIGGER_1, ECHO_1);
  sensor2.attach(TRIGGER_2, ECHO_2);
  
}

void loop() {
unsigned int Distance1 = sensor1.getDistance();
  unsigned int Distance2 = sensor2.getDistance();

  if (Distance1 > 0) {
    Serial.print("GG MLG.EX11E HAS STOPPED WORKING");
    sum1 = sum1 + Distance1;
    counter1 = counter1 + 1;
  }
  if (counter1 >= 10) {
    sum1 = sum1 / 10;
    Serial.print("Sum1 ");
    Serial.println(sum1);
    counter1 = 0;
    sum1 = 0;
  }

  if (Distance2 > 0) {
    sum2 = sum2 + Distance2;
    counter2 = counter2 + 1;
  }
  if (counter2 >= 10) {
    sum2 = sum2 / 10;
    Serial.print("Sum2 ");
    Serial.println(sum2);
    counter2 = 0;
    sum2 = 0;
  }
}
