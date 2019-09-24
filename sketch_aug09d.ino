#include<Servo.h>
int a1 = 9;
int a2 = 10;
int a3 = 11;
int a4 = 12;
char v;
Servo servo1;
void setup() {
  pinMode(a1, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(a3, OUTPUT);
  pinMode(a4, OUTPUT);
  Serial.begin(9600);
  servo1.attach(8);
}

void loop() {
  while (Serial.available() > 0)
  {
    v = Serial.read();
    Serial.println(v);
    // servo1.write(0);
  }
  switch (v)
  {

    case 'B':
      digitalWrite(a1, LOW);
      digitalWrite(a2, HIGH);
      digitalWrite(a3, LOW);
      digitalWrite(a4, HIGH);
      break;
    case 'R':
      digitalWrite(a1, HIGH);
      digitalWrite(a2, LOW);
      digitalWrite(a3, LOW);
      digitalWrite(a4, LOW);
      break;
    case 'L':
      digitalWrite(a1, LOW);
      digitalWrite(a2, LOW);
      digitalWrite(a3, HIGH);
      digitalWrite(a4, LOW);
      break;
    case 's':
      digitalWrite(a1, LOW);
      digitalWrite(a2, LOW);
      digitalWrite(a3, LOW);
      digitalWrite(a4, LOW);
      break;
    case 'F':
      digitalWrite(a1, HIGH);
      digitalWrite(a2, LOW);
      digitalWrite(a3, HIGH);
      digitalWrite(a4, LOW);
      break;
    case 'W':
      servo1.write(180);
      break;
    case 'w':
      servo1.write(0);
      break;

    default:
      digitalWrite(a1, LOW);
      digitalWrite(a2, LOW);
      digitalWrite(a3, LOW);
      digitalWrite(a4, LOW);
      servo1.write(0);
      break;
  }

}
