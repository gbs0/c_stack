#include <stdio.h>

int main() {
  char a = getchar();

  printf("You entered: ");
  putchar(a);  /* Outputs a single character */

  return 0;
}

int foo() {
	int x, y;
	char text[20];

	/* Print 4.42 */
	printf("%3.2f", 4.4267893);
	/* 
	3 = total number of characters include space decimal everything
	2 = number of letters after decimal 
	f = float used for decimal numbers
	*/

	scanf("%2d %d %*f %5s", &x, &y, text);
	/* input: 1234  5.7  elephant */
	
	printf("%d  %d  %s", x, y, text);
	/* output: 12  34  eleph */ 	
	
	printf("Color: %s, Number: %d, float: %5.2f \n", "red", 42, 3.14159);
	/* Color: red, Number: 42, float:  3.14  */

	printf("Pi = %3.2f", 3.14159); 
	/* Pi = 3.14 */

	printf("Pi = %8.5f", 3.14159); 
	/* Pi =   3.14159 */

	printf("Pi = %-8.5f", 3.14159); 
	/* Pi = 3.14159 */
}


int bar()
{
	printf("The tree has %d apples.\n", 22);
	/* The tree has 22 apples. */
}

/* Escape sequences:
/* \n new line
/* \t horizontal tab
/* \\ backslash
/* \b backspace
/* \' single quote
/* \" double quote