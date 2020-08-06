#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    bool isValid = false;
    int n_floor;
    
    do {
		printf("Height (1-8):\n");
		scanf("%d", &n_floor);
		printf("\n got the number of floors: %d", n_floor);

   	} while(n_floor >= 1 && n_floor <= 8); // Make sure the int is beetween 1..8 range
    
    printf("hello, world\n");

	switch(x)
   	{
      case 1: printf("       #");
      case 2: printf("      ##");
      //  case 3: printf("case 3.\n"); break;
      case 3: printf("     ###");
      case 4: printf("    ####");
      case 5: printf("   #####");
      case 6: printf("  ######");
      case 7: printf(" #######");
      case 8: printf("########");
      default: printf("default.\n");
   	}
}	