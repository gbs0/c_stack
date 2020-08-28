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
	int key = atoi(argv[1]); // Display what the key index

	printf("key: ");
	printf("%d\n", key);
	printf("%s", "plaintext: "); // Ask for an plaintext
	fgets(plaintext, sizeof(plaintext), stdin);
	printf("%s", "cyphertext: ");

	for (int i = 0, len = strlen(&plaintext[0]); i < len; i++)
	{
 		char l = plaintext[i];
 		int ascii = l;
 		
		if(isalpha(l))
 		{
 			if(islower(l))
 			{
				int cypherWord = (ascii - 97 + key) % 26 + 97;
				printf("%c", cypherWord);

 			} else {
				int cypherWord = (ascii - 65 + key) % 26 + 65;
				printf("%c", cypherWord);
			}
 		} else
		{
		    printf("%c", l);
		}	
	}
}