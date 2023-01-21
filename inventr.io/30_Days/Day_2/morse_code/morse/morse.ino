
int Light = 12; // The HERO Board Pin 12 that the LED is wired to
 
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 12 as an output.
  pinMode(Light, OUTPUT);
  //digitalWrite(Light, HIGH);
}
 

// morse code dit dah definitions
// timing: https://morsecode.world/international/timing.html
// 12wpm = 100ms per unit
void dit() {
  digitalWrite(Light, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                        // wait for 100 milliseconds - 1 unit
  digitalWrite(Light, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                        // wait for 100 milliseconds - 1 unit
}

void dah() {
  digitalWrite(Light, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                        // wait for 300 milliseconds - 3 units
  digitalWrite(Light, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                        // wait for 100 milliseconds - 1 unit
}


// letter definitions
void letter_A() {
  dit();
  dah();
  delay(200);          // add some delay between letters (ending in dah); 1+2 units
}

void letter_B() {
  dah();
  dit();
  dit();
  dit();
  delay(200);          // add some delay between letters (ending in dit); 1+2 units
}

void letter_C() {
  dah();
  dit();
  dah();
  dit();
  delay(200);          // add some delay between letters (ending in dit); 1+2 units
}

void letter_D() {
  dah();
  dit();
  dit();
  delay(200);          // add some delay between letters (ending in dit); 1+2 units
}

void letter_E() {
  dit();
  delay(200);          // add some delay between letters (ending in dit); 1+2 units
}

void letter_F() {
  dit();
  dit();
  dah();
  dit();
  delay(200);          // add some delay between letters (ending in dit); 1+2 units
}

void letter_G() {
  dah();
  dah();
  dit();
  delay(200);          // add some delay between letters (ending in dit); 1+2 units
}

void letter_H() {
  dit();
  dit();
  dit();
  dit();
  delay(200);          // add some delay between letters (ending in dit); 1+2 units
}

void letter_I() {
  dit();
  dit();
  delay(200);          // add some delay between letters (ending in dit); 1+2 units
}

void letter_J() {
  dit();
  dah();
  dah();
  dah();
  delay(200);          // add some delay between letters (ending in dah); 1+2 units
}

void letter_K() {
  dah();
  dit();
  dah();
  delay(200);          // add some delay between letters (ending in dah); 1+2 units
}

void letter_L() {
  dit();
  dah();
  dit();
  dit();
  delay(200);          // add some delay between letters (ending in dit); 1+2 units
}

void letter_M() {
  dah();
  dah();
  delay(200);          // add some delay between letters (ending in dah); 1+2 units
}

void letter_N() {
  dah();
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
  delay(200);          // add some delay between letters (ending in dit); 1+2 units
}

void letter_Q() {
  dah();
  dah();
  dit();
  dah();
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

void letter_T() {
  dah();
  delay(200);          // add some delay between letters (ending in dah); 1+2 units
}

void letter_U() {
  dit();
  dit();
  dah();
  delay(200);          // add some delay between letters (ending in dah); 1+2 units
}

void letter_V() {
  dit();
  dit();
  dit();
  dah();
  delay(200);          // add some delay between letters (ending in dah); 1+2 units
}

void letter_W() {
  dit();
  dah();
  dah();
  delay(200);          // add some delay between letters (ending in dah); 1+2 units
}

void letter_X() {
  dah();
  dit();
  dit();
  dah();
  delay(200);          // add some delay between letters (ending in dah); 1+2 units
}

void letter_Y() {
  dah();
  dit();
  dah();
  dah();
  delay(200);          // add some delay between letters (ending in dah); 1+2 units
}

void letter_Z() {
  dah();
  dah();
  dit();
  dit();
  delay(200);          // add some delay between letters (ending in dit); 1+2 units
}


// numbers
void number_1() {
  dit();
  dah();
  dah();
  dah();
  dah();
  delay(200);          // add some delay between numbers (ending in dah); 1+2 units
}

void number_2() {
  dit();
  dit();
  dah();
  dah();
  dah();
  delay(200);          // add some delay between numbers (ending in dah); 1+2 units
}

void number_3() {
  dit();
  dit();
  dit();
  dah();
  dah();
  delay(200);          // add some delay between numbers (ending in dah); 1+2 units
}

void number_4() {
  dit();
  dit();
  dit();
  dit();
  dah();
  delay(200);          // add some delay between numbers (ending in dah); 1+2 units
}

void number_5() {
  dit();
  dit();
  dit();
  dit();
  dit();
  delay(200);          // add some delay between numbers (ending in dit); 1+2 units
}

void number_6() {
  dah();
  dit();
  dit();
  dit();
  dit();
  delay(200);          // add some delay between numbers (ending in dit); 1+2 units
}

void number_7() {
  dah();
  dah();
  dit();
  dit();
  dit();
  delay(200);          // add some delay between numbers (ending in dit); 1+2 units
}

void number_8() {
  dah();
  dah();
  dah();
  dit();
  dit();
  delay(200);          // add some delay between numbers (ending in dit); 1+2 units
}

void number_9() {
  dah();
  dah();
  dah();
  dah();
  dit();
  delay(200);          // add some delay between numbers (ending in dit); 1+2 units
}

void number_0() {
  dah();
  dah();
  dah();
  dah();
  dah();
  delay(200);          // add some delay between numbers (ending in dah); 1+2 units
}



// Words
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


// message
void message() {
  word_SOS();
  word_Paris();
}

// broadcast
void loop() {
  message();
}
