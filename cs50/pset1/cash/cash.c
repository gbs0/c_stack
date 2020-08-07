#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>


int main(void)
{
    int cents = 0;
    int notes[] = { 1, 2, 5, 10, 20, 50, 100, 200 };
    int coins[] = { 25, 10, 5, 1 };

    float dollars;
    
    do {
		printf("Insert Money:\n");
    printf("$");
		scanf("%f", &dollars );
    printf("%f\n", dollars);
    
    cents = (int)round(dollars * 100);
		printf("%d\n", cents);
    // for(int i = 0; i < dollars ; ++i) {
		// 	printf("%s\n", "#");
		// }

   	} while(dollars  >= 1 && dollars  <= 8); // Make sure the int is beetween 1..8 range
}	

