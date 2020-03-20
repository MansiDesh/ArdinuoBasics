int ledpin = 13;    //set pin no of ardinuo to which led is connected
int inputpin = 8;    
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode (inputpin , INPUT_PULLUP);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledpin, LOW );                                          
  int led_state;
  led_state = digitalRead(inputpin);
  Serial.println(led_state);
  if (led_state == 0 )
    digitalWrite(ledpin, HIGH);    // turn the LED on by making the voltage HIGH
    delay(100);
}
