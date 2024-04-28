/*-------------------------PROJET TPRO-------------------
MADE BY : CLAUDE-DIDIER-FADI-MARC
*/

const int switchPin = 2;
int motorPin = 9;
int switchState = 0;
int speedMotor;
//LED
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int led5 = 7;
int led6 = 12;

void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(switchPin, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  
}

void loop() {
  switchState = digitalRead(switchPin);

  if (switchState == HIGH) {

    speedMotor = 18;
    analogWrite(motorPin,speedMotor);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
  }

  else {
    digitalWrite(motorPin,LOW);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
  }

}
