void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

}

// morse code dit dah definitions
// timing: https://morsecode.world/international/timing.html
// 12wpm = 100ms per unit
void dit() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                        // wait for 100 milliseconds - 1 unit
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                        // wait for 100 milliseconds - 1 unit
}

void dah() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                        // wait for 300 milliseconds - 3 units
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                        // wait for 100 milliseconds - 1 unit
}

// letter definitions
void letter_A() {
  dit();
  dah();
  delay(200);          // add some delay between letters (ending in dah); 1+2 units
}

void letter_I() {
  dit();
  dit();
  delay(200);          // add some delay between letters (ending in dit); 1+2 units
}

void letter_O() {
  dah();
  dah();
  dah();
  delay(200);          // add some delay between letters (ending in dah); 1+2 units
}

void letter_P() {
  dit();
  dah();
  dah();
  dit();
  delay(200);          // add some delay between letters (ending in dah); 1+2 units
}

void letter_R() {
  dit();
  dah();
  dit();
  delay(200);          // add some delay between letters (ending in dit); 1+2 units
}

void letter_S() {
  dit();
  dit();
  dit();
  delay(200);          // add some delay between letters (ending in dit); 1+2 units
}


// SOS
void word_SOS() {
  letter_S();
  letter_O();
  letter_S();
  delay(400);          // add some delay between words; 3+4 units  
}

// Paris
void word_Paris() {
  letter_P();
  letter_A();
  letter_R();
  letter_I();
  letter_S();
  delay(400);          // add some delay between words; 3+4 units  
}

void loop() {
  //word_SOS();
  word_Paris();
}
