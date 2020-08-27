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
	char* keyCypher = argv[1];
	printf("%s", keyCypher);
}