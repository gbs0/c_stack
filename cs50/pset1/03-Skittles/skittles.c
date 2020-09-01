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
		scanf("%d", &guess);

	  	if (guess <= 1) {
			printf("Haha! Tenho muito mais que isso!\n");
	  	}

		if (guess >= 1023) {
			printf("Ok, não são tantos assim. Tente novamente.\n");
		}

		if (guess > skittlesCount) {
	  		printf("%s\n", "Tenho menos do que isso!\n");
	  	}
	  	
	  	if (guess < skittlesCount) {
	  	  printf("%s\n", "Tenho mais do que isso!\n");
	  	}

	} while (guess != skittlesCount);

	printf("%s\n", "Parabéns, você adivinhou a quantidade exata!");
	return 0;
}