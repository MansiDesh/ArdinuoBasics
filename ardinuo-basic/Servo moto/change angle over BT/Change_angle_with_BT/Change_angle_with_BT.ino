/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int angle;
int data;
void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.write(180);
  delay(30);
  Serial.println("Angle is :");
  angle = myservo.read();
  Serial.println(angle);

  if(Serial.available() > 0)  // Send data only when you receive data:
   {
      data = Serial.read();        //Read the  incoming  data and store it into variable data
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n");          //New line
      if(data == '0')              // Checks whether value of data is equal to 1
         myservo.write(180);
       //If value is 1 then LED turns ON
      else if(data == '1')         //  Checks  whether value of data is equal to 0
         myservo.write(90);    //If value is 0 then LED turns OFF
      delay(70);
      Serial.println("Angle is :");
      angle = myservo.read();
      Serial.println(angle);
   }

  
}
