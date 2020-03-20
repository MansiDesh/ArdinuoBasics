int ledpin = 13;                      //set pin no of ardinuo to which led is connected  
void setup() {
  pinMode(ledpin, OUTPUT);            // initialize digital pin LED_BUILTIN as an output.
  
  
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledpin, LOW );    // turn the LED off by making the voltage LOW
  delay(1000);
  digitalWrite(ledpin, HIGH);    // turn the LED ON by making the voltage HIGH
  delay(1000);                
  }
