#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage ./caesar key");
		return 1;
	}

	char plaintext[50];
	char* alphaCypher = argv[1];
	
	printf("%s\n", alphaCypher);
	printf("%s", "plaintext: "); // Ask for an plaintext
	fgets(plaintext, sizeof(plaintext), stdin);
	printf("%s", plaintext);
	printf("%s", "cyphertext: ");

	for(int i = 0, len = strlen(&plaintext[0]); i < len; i++)
	{
		char l = plaintext[i];
		int ascii = l;

		if(isalpha(l));
		{
			int cypherWord = 0;
			printf("%c", cypherWord);
		}
	}

}