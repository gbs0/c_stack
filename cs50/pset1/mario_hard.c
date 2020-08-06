#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

void func(int x)
{
   printf("%d",x);
   switch(x)
   {
      case 1: printf("       #\n");
      case 2: printf("      ##\n");
      //  case 3: printf("case 3.\n"); break;
      case 3: printf("     ###\n");
      case 4: printf("    ####\n");
      case 5: printf("   #####\n");
      case 6: printf("  ######\n");
      case 7: printf(" #######\n");
      case 8: printf("########\n");
      default: printf("\n");
   }
}

int main(void)
{
    bool isValid = false;
    int n_floor;
    
    do {
		printf("Height (1-8):\n");
		scanf("%d", &n_floor);
		printf("\n got the number of floors: %d \n", n_floor);

   	}while(n_floor >= 1 && n_floor <= 8); // Make sure the int is beetween 1..8 range
    
	for(int i = 0; i < n_floor; ++i) {
		printf("%s\n", "#");
	}
}	

