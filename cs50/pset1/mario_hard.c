#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

void func(int x)
{
   
   switch(x)
   {
      case 1: printf("#  #\n"); break;
      case 2: printf(" #  #\n##  ##\n"); break;
      case 3: printf("  #  #\n ##  ##\n###  ###\n"); break;
      case 4: printf("   #  #\n  ##  ##\n ###  ###\n####  ####\n"); break;
      case 5: printf("#\n##\n###\n####\n#####\n"); break ;
      case 6: printf("#\n##\n###\n####\n#####\n######\n"); break;
      case 7: printf("#\n##\n###\n####\n#####\n######\n#######\n"); break;
      case 8: printf("#\n##\n###\n####\n#####\n######\n#######\n########\n"); break;
      default: printf("\n");
   }
}

int main(void)
{
    int n_floor;
    
    do {
		printf("Height (1-8):\n");
		scanf("%d", &n_floor);

		if (n_floor > 8) break;

		// for(int i = 0; i < n_floor; ++i) {
		// 	printf("%s\n", "#");
		// }

		func(n_floor);


   	} while(n_floor >= 1 && n_floor <= 8); // Make sure the int is beetween 1..8 range
}	

