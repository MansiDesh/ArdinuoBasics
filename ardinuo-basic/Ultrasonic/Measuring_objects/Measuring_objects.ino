int trig = 13;
int echo = 8;
long HighDuration;
int distance;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig , OUTPUT);
  pinMode(echo ,INPUT);

}

void loop() {
  long tocm;
  // put your main code here, to run repeatedly:
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
  delay(1000);
}
