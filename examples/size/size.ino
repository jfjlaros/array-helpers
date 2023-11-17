#include <arrayHelpers.h>


void setup() {
  Serial.begin(9600);

  int a[] {1, 2, 3, 4, 5};
  Serial.println(arraySize(a));  // Prints "5".
}

void loop() {}
