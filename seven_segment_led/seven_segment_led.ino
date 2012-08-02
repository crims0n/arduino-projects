// Example code for driving a 7-segment LED common cathode numerical display
// Radio Shack part number 276-0075
// Code is based off work started by Sudar: https://github.com/sudar/arduino-sketches/tree/master/SevenSegment

#define pA 2
#define pB 3
#define pC 4
#define pD 5
#define pE 6
#define pF 7
#define pG 8
#define pDP 9

// common cathode;
#define ON HIGH
#define OFF LOW

// used for delay
int ms = 1000;

void setup() {
  pinMode(pA, OUTPUT);
  pinMode(pB, OUTPUT);
  pinMode(pC, OUTPUT);
  pinMode(pD, OUTPUT);
  pinMode(pE, OUTPUT);
  pinMode(pF, OUTPUT);
  pinMode(pG, OUTPUT);
  pinMode(pDP, OUTPUT);
  
}

void loop() {
  zero();
  one();
  two();
  three();
  four();
  five();
  six();
  seven();
  eight();
  nine();
  decimal();
}

// 0
void zero() {
  digitalWrite(pA, ON);
  digitalWrite(pB, ON);
  digitalWrite(pC, ON);
  digitalWrite(pD, ON);
  digitalWrite(pE, ON);
  digitalWrite(pF, OFF);
  digitalWrite(pG, ON);
  digitalWrite(pDP, OFF);
  delay(ms);
}

// 1 
void one() {
  digitalWrite(pA, OFF);
  digitalWrite(pB, ON);
  digitalWrite(pC, ON);
  digitalWrite(pD, OFF);
  digitalWrite(pE, OFF);
  digitalWrite(pF, OFF);
  digitalWrite(pG, OFF);
  digitalWrite(pDP, OFF);
  delay(ms);
}

// 2 
void two() {
  digitalWrite(pA, ON);
  digitalWrite(pB, ON);
  digitalWrite(pC, OFF);
  digitalWrite(pD, ON);
  digitalWrite(pE, ON);
  digitalWrite(pF, ON);
  digitalWrite(pG, OFF);
  digitalWrite(pDP, OFF);
  delay(ms);
}

// 3 
void three() {
  digitalWrite(pA, ON);
  digitalWrite(pB, ON);
  digitalWrite(pC, ON);
  digitalWrite(pD, ON);
  digitalWrite(pE, OFF);
  digitalWrite(pF, ON);
  digitalWrite(pG, OFF);
  digitalWrite(pDP, OFF);
  delay(ms);
}

// 4
void four() {
  digitalWrite(pA, OFF);
  digitalWrite(pB, ON);
  digitalWrite(pC, ON);
  digitalWrite(pD, OFF);
  digitalWrite(pE, OFF);
  digitalWrite(pF, ON);
  digitalWrite(pG, ON);
  digitalWrite(pDP, OFF);
  delay(ms);
}

// 5
void five() {
  digitalWrite(pA, ON);
  digitalWrite(pB, OFF);
  digitalWrite(pC, ON);
  digitalWrite(pD, ON);
  digitalWrite(pE, OFF);
  digitalWrite(pF, ON);
  digitalWrite(pG, ON);
  digitalWrite(pDP, OFF);
  delay(ms);
}

// 6 
void six() {
  digitalWrite(pA, ON);
  digitalWrite(pB, OFF);
  digitalWrite(pC, ON);
  digitalWrite(pD, ON);
  digitalWrite(pE, ON);
  digitalWrite(pF, ON);
  digitalWrite(pG, ON);
  digitalWrite(pDP, OFF);
  delay(ms);
}

// 7 
void seven() {
  digitalWrite(pA, ON);
  digitalWrite(pB, ON);
  digitalWrite(pC, ON);
  digitalWrite(pD, OFF);
  digitalWrite(pE, OFF);
  digitalWrite(pF, OFF);
  digitalWrite(pG, OFF);
  digitalWrite(pDP, OFF);
  delay(ms);
}

// 8
void eight() {
  digitalWrite(pA, ON);
  digitalWrite(pB, ON);
  digitalWrite(pC, ON);
  digitalWrite(pD, ON);
  digitalWrite(pE, ON);
  digitalWrite(pF, ON);
  digitalWrite(pG, ON);
  digitalWrite(pDP, OFF);
  delay(ms);
}

// 9
void nine() {
  digitalWrite(pA, ON);
  digitalWrite(pB, ON);
  digitalWrite(pC, ON);
  digitalWrite(pD, ON);
  digitalWrite(pE, OFF);
  digitalWrite(pF, ON);
  digitalWrite(pG, ON);
  digitalWrite(pDP, OFF);
  delay(ms);
}

// decimal
void decimal() {
  digitalWrite(pA, OFF);
  digitalWrite(pB, OFF);
  digitalWrite(pC, OFF);
  digitalWrite(pD, OFF);
  digitalWrite(pE, OFF);
  digitalWrite(pF, OFF);
  digitalWrite(pG, OFF);
  digitalWrite(pDP, ON);
  delay(ms);
}
