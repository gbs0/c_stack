#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<regex.h>


int main(int argc, string argv[])
{
	// get argv[1] & 2 (check if contains only digit)
	if (argc != 2 || regcomp(argv[1], "/[ˆa-z]/i"))
	{
		printf("Usage ./caesar key");
		return 1;
	}

	int key = atoi(argv[1]);
	

	// get_string for user
	// string text = 'This is CS50';
	// text[0] => 'T'
	// text[1] => 'h'
	// text[2] => 'i'
	// string.length == strlen(text) => 12



	// For loop for encipher one caracther
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