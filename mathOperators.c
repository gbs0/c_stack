#include <stdio.h>

int multiply() // Multiply
{
	int length = 10;
  int width = 5;
  int area;

  area = length * width;
  printf("%d \n", area);  /* $=> 50 */

  return 0;
}

int divide() { // Divide

  int i1 = 10;
  int i2 = 3;
  int quotient, remainder;
  float f1 = 4.2;
  float f2 = 2.5;
  float result;

  quotient = i1 / i2; // $=> 3  
  remainder = i1 % i2; // $=> 1
  result = f1 / f2; // $=> 1.68

  printf("%d\n", quotient);
  printf("%d\n", remainder);
  printf("%f\n", result);

  return 0;
}

int precedence() { // Operator Precedence
  int a = 6;
  int b = 4;
  int c = 2;
  int result;
  result = a - b + c; // 4
  printf("%d \n", result);
 
  result = a + b / c; // 8
  printf("%d \n", result);
  
  result = (a + b) / c; // 5
  printf("%d \n", result);

  return 0;
}