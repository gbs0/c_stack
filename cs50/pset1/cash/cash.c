#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>


int main(void)
{
    float cashInput;
    
    do {
		printf("Inser Money:\n");
		scanf("%d", &cashInput );

		// for(int i = 0; i < cashInput ; ++i) {
		// 	printf("%s\n", "#");
		// }


   	} while(cashInput  >= 1 && cashInput  <= 8); // Make sure the int is beetween 1..8 range
}	

