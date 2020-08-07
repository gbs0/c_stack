#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    int cents = 0; // Are *100 float value
    int amount = 0;
    
    // int notes[] = { 1, 2, 5, 10, 20, 50, 100, 200 };
    int coins[] = { 25, 10, 5, 1 };

    float dollars;
    
    do {
  		printf("Insert Money:\n");
      printf("$");

  		scanf("%f", &dollars ); // Get value from terminal
      printf("%f\n", dollars);
      
      cents = (int)round(dollars * 100); // Converting entered amount by 100, o factor with coin integer
  		printf("%d\n", cents);
      
      // for(int i = 0; i <= 5; i++)
      // {
      //   if (cents % coins[0] != 0)
      //   {
      //     cents -= coins[0];
      //     amount += 1;
      //     printf("%d\n", cents);

      //   }
      //   else if(cents % coins[1] != 0)
      //   {
      //     cents -= coins[1];
      //     amount += 1;
      //     printf("%d\n", cents);
      //   }
      //   else if(cents % coins[2] != 0)
      //   {
      //     cents -= coins[2];
      //     amount += 1;
      //     printf("%d\n", cents); 
      //   }
      //   else if(cents % coins[3] != 0)
      //   {
      //     cents -= coins[3];
      //     amount += 1;
      //     printf("%d\n", cents); 
      //   }  
      // }
      
      while(cents >= 25)
      {
        amount++;
        cents -= coins[0];
      }

      while(cents >= 10)
      {
        amount++;
        cents -= coins[1];
      }

      while(cents >= 5)
      {
        amount++;
        cents -= coins[2];
      }

      while(cents >= 1)
      {
        amount++;
        cents -= coins[3];
      }
      // for(int i = 0; i < dollars ; ++i) {
  		// 	printf("%s\n", "#");
  		// }
      printf("%d\n", cents);

   	} while(dollars  >= 0 && dollars  <= 10); // Make sure the int is beetween 1..8 range
}	

