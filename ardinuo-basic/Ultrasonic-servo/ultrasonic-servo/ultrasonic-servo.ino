
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

Servo myservo2 ; // twelve servo objects can be created on most boards

int pos = 0;
int trig = 13;
int echo = 8;
long HighDuration;
int distance;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig , OUTPUT);
  pinMode(echo ,INPUT);
  myservo.attach(9);
  myservo2.attach(10);
}

void loop() {
  long tocm;
  // put your main code here, to run repeatedly:
  myservo.write(90);
  myservo2.write(90);
  delay(30);

  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);


  HighDuration = pulseIn(echo , HIGH);
  //Serial.println(HighDuration);

  distance = (HighDuration /2 ) * 0.0343;
  Serial.println("Distance of object is : ");
  Serial.println(distance);
  if (distance > 0 && distance < 15 ) {
   for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);  
    myservo2.write(pos);// tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
   }
    }

}
