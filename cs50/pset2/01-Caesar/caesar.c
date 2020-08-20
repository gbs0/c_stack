#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv[])
{
	char cyphertext[];
	s
	if (argc != 2)
	{
		printf("Usage ./caesar key");
		return 1;
	}

	int key = atoi(argv[1]); // Display what the key index
	printf("key: ");
	printf("%d\n", key);

	printf("%s", "plaintext: "); // Ask for an plaintext
	char plaintext[50];
	fgets(plaintext, sizeof(plaintext), stdin);
	
	for (int i = 0, len = strlen(&plaintext[0]); i < len; i++)
	{
 		// char l = strlen(&plaintext);
 		char l = plaintext[i];
 		if(isalpha(l))
 		{
 			printf("%c\n", l);
 		}
	}
	
	// Functions that may be usefull:
	// isalpha('A') => true
	// isupper('A') => true
	// islower('A') => false
	// Formula cyphertext[i] = (plaintext[i] + key) % 26

	// ASCII Convertion to alphabetical index // bytes for each letter
	// Shift letter index using formula
	// Convert result back to ASCII


	for (int i = 0, len = strlen())
	// printing the result

}