#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int calcDraw(int cents)
{
    
    int amount_left = 0;
    int coins[] = [ 1, 5, 10, 25 ];
    // int notes[] = { 1, 2, 5, 10, 20, 50, 100, 200 };
    int draw[] = [];

    int n = 4; // Size of coins array
    int i = n - 1;

    do {
        while(cents >= coins[i])
        {
            cents -= coins[i];
            draw[i] = coins[i];       
        }

        i -= 1;
    
    } while (i >= 0);

    return draw;
}

int main(void)
{
    float dollars;
    
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
    
    
    // for(int i = 0; i < dollars ; ++i) {
    //  printf("%s\n", "#");
    // }
    printf("%d\n", cents);
}	

