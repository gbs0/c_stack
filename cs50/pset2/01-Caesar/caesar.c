#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<regex.h>


int main(int argc, char *argv[]) // get string for user
{
	char plaintext;
	// int reti;
	// reti = regcomp(argv[1], "/[ˆa-z]/i", 0);
	

	if (argc != 2) // get argv[0] & argv[1] (check if contains only digit)
	{
		printf("Usage ./caesar key");
		return 1;
	}

	int key = atoi(argv[1]); // converting to integer
	printf("key: ");
	printf("%d\n", key);

	printf("%s", "plaintext: ");
	
	scanf("%s", &plaintext ); // Get value from terminal
	
	printf("%s\n", &plaintext);
	

	// for (int i = 0; int len = strlen(plaintext); i < len; i++) // For loop for encipher each caracther
	// {

	// }
	
	// text[0] => 'T'
	// text[1] => 'h'
	// text[2] => 'i'
	// string.length == strlen(text) => 12


	// 
	// Functions that may be usefull:
	// isalpha('A') => true
	// isupper('A') => true
	// islower('A') => false
	// Formula cyphertext[i] = (plaintext[i] + key) % 26

	// ASCII Convertion to alphabetical index // bytes for each letter
	// Shift letter index using formula
	// Convert result back to ASCII


	// printing the result

}