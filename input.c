#include <stdio.h>

int main() {
	char userInput = getchar();	// Gets user input

	printf("You entered: %c\n", userInput);
	return 0;
}

int foo () {
	char a[100]; // Array with 100 strings
	gets(a); 	// Read input 

  printf("You entered: %s", a);

  return 0;
}
