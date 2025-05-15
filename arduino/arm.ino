#include <Servo.h>

Servo servo1, servo2, servo3;
String input = "";

void setup() {
  Serial.begin(9600);
  servo1.attach(9);   // Conecte o servo 1 ao pino 9
  servo2.attach(10);  // Conecte o servo 2 ao pino 10
  servo3.attach(11);  // Conecte o servo 3 ao pino 11
}

void loop() {
  if (Serial.available()) {
    input = Serial.readStringUntil('\n');
    int s1, s2, s3;
    sscanf(input.c_str(), "%d,%d,%d", &s1, &s2, &s3);
    servo1.write(s1);
    servo2.write(s2);
    servo3.write(s3);
  }
}
