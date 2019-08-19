#include <stdio.h>

int main() {
  char a = getchar();

  printf("You entered: ");
  putchar(a);  // Outputs a single character

  return 0;
}

int foo() {
	int x, y;
	char text[20];

	scanf("%2d %d %*f %5s", &x, &y, text);
	/* input: 1234  5.7  elephant */
	printf("%d  %d  %s", x, y, text);
	/* output: 12  34  eleph */ 	
}
