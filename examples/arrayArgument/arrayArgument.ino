#include <arrayHelpers.h>


void printArray(Span<int> s) {
  for (int const& i: s) {
    Serial.println(i);
  }
}


void setup() {
  Serial.begin(9600);

  int a[] {1, 2, 3, 4, 5};
  printArray(a);
}

void loop() {}
