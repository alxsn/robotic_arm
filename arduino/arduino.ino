#include <Servo.h>

Servo servo1, servo2, servo3, servo4, servo5, servo6;
String input = "";

void setup() {
  Serial.begin(9600);
  servo1.attach(9);   // Conecte o servo 1 ao pino 9
  servo2.attach(10);  // Conecte o servo 2 ao pino 10
  servo3.attach(11);  // Conecte o servo 3 ao pino 11
  servo4.attach(3);
  servo5.attach(5);
  servo6.attach(6);

  //servo4.attach(3, 500, 2500);
  //servo4.writeMicroseconds(1500);  // posição neutra (~90°)
  //servo4.writeMicroseconds(500);   // 0°
  //servo4.writeMicroseconds(2500);  // 180°
  //servo4.write(0);
  //delay(500);
  //servo4.write(180);
  //delay(500);
  //servo4.write(90);
}

void loop() {
  if (Serial.available()) {
    input = Serial.readStringUntil('\n');
    int s1, s2, s3, s4, s5, s6;
    sscanf(input.c_str(), "%d,%d,%d,%d,%d,%d", &s1, &s2, &s3, &s4, &s5, &s6);
    servo1.write(s1);
    servo2.write(s2);
    servo3.write(s3);
    servo4.write(s4);
    servo5.write(s5);
    servo6.write(s6);
  }
}
