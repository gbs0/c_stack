#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

void func(int x)
{
   
   switch(x)
   {
      case 1: printf("#\n"); break;
      case 2: printf("#\n##\n"); break;
      case 3: printf("#\n##\n###\n"); break;
      case 4: printf("#\n##\n###\n####\n"); break;
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

		if (n_floor > 8 && n_floor < 1) printf("%s\n **** Only nº beetween 1 and 8 are valid");

		

		func(n_floor); // Or without function:
    // for(int i = 0; i < n_floor; ++i) {
    //  printf("%s\n", "#");
    // }

   	} while (n_floor >= 1 && n_floor <= 8);
}	

