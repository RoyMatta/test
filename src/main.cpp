#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);
int result=0;

void setup() {
  // put your setup code here, to run once:
   result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Hello World!");

}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}