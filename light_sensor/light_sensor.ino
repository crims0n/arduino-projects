// Reads an analog value from a standard light sensor, chops the raw value into ten possible
// values between 0-9, then displays that value on the 7-segment LED

// 7-segment led digital pin inputs
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

//light sensor is on analog pin 0
int lightPin = 0;

// set initial value to 0
int val = 0;  

void setup() {
  
  //used for debuging
  //Serial.begin (9600);
  
  pinMode(pA, OUTPUT);
  pinMode(pB, OUTPUT);
  pinMode(pC, OUTPUT);
  pinMode(pD, OUTPUT);
  pinMode(pE, OUTPUT);
  pinMode(pF, OUTPUT);
  pinMode(pG, OUTPUT);
  pinMode(pDP, OUTPUT);
  
}

// After a bit of testing, it seems my sensor has a max brightness value of about 400, and
// a min darkness value of 1025. I decided to chop the raw value into ranges of 62.5 for my purposes
// your sensor may be different

void loop() {
  val = analogRead(lightPin);
  
  //used for debuging 
  Serial.println(val);
  
  if (val >= 962.5){
    zero();
  }
  
  else if (val >= 900){
    one();
  }
  
  else if (val >= 837.5){
    two();
  }
  
  else if (val >= 775){
    three();
  }
  
  else if (val >= 712.5){
    four();
  }
  
  else if (val >= 650){
    five();
  }
  
  else if (val >= 587.5){
    six();
  }
  
  else if (val >= 525){
    seven();
  }
  
  else if (val >= 462.5){
    eight();
  }
  
  else if (val >= 400){
    nine();
  }
  
  //should not see this in natural light conditions
  else {
    error();
  }
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

// DP
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

// E
void error() {
  digitalWrite(pA, ON);
  digitalWrite(pB, OFF);//
  digitalWrite(pC, OFF);
  digitalWrite(pD, ON);
  digitalWrite(pE, ON);
  digitalWrite(pF, ON);
  digitalWrite(pG, ON);
  digitalWrite(pDP, OFF);
  delay(ms);
}
