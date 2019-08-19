#include <stdio.h>

int main() {  // Get first character from user input
	char userInput = getchar();
	printf("You entered: %c\n", userInput);
	return 0;
}

int foo () { // Get 100 character from user input
	char a[100]; 
	gets(a); 	// Read input 

  printf("You entered: %s", a);

  return 0;
}
