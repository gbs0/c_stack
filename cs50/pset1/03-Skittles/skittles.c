#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int skittlesCount = rand() % 1024;
	int guess;
	printf("%s\n", "Qual o seu palpite? (0-1023)");

	do
	{

	} while (guess != skittlesCount);

	printf("%s\n", "Parabéns, você adivinhou a quantidade exata!");
}