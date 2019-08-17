#include <stdio.h>

int main() {
  printf("int: %d \n", sizeof(int)); // => 4
  printf("float: %d \n", sizeof(float)); // => 4
  printf("double: %d \n", sizeof(double)); // => 8
  printf("char: %d \n", sizeof(char)); // => 1

  return 0;
}