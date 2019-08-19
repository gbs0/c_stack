#include <stdio.h>

int main() 
{
	int a;
  
  scanf("%d", &a);
  // The & sign before the variable name is the address operator 
  // It gives the address, or location in memory, of a variable
  // This is needed because scanf() places an input value at a variable address

  printf("You entered: %d", a);

  return 0;
}