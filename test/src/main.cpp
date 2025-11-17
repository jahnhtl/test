#include <Arduino.h>

// put function declarations here:
int myFunction(float, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(float x, int y) {
  return x + y;
}