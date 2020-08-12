#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define COINS 4
#define MAX 20

void calcDraw(int cents)
{
    int amount_left = 0;
    int coins[COINS] = { 1, 5, 10, 25 };
    // int notes[] = { 1, 2, 5, 10, 20, 50, 100, 200 };
    int draw[MAX] = { 0 };
    int i, k = 0;
    
    // int n = 4; // Size of coins array
    // int i = n - 1;

    // do {
    //     while(cents >= coins[i])
    //     {
    //         cents -= coins[i];
    //         draw[i] = coins[i];       
    //     }

    //     i -= 1;
    
    // } while (i >= 0);

    for (i = COINS - 1; i >= 0; i--)
    {
        while(cents >= coins[i]){
            cents -= coins[i];
            draw[k++] = coins[i];
        }
    }
    return;
    printf("Populated array");
}

int main(void)
{
    // int amount_left = 0;
    // int coins[] = { 1, 5, 10, 25 };
    // int draw[64];

    // int n = sizeof(coins);
    // int i = n - 1;

    float dollars;
    
    printf("Insert Money:\n");
    printf("$");

    scanf("%f", &dollars ); // Get value from terminal
    // printf("%f\n", dollars);
    
    int cents = (int)round(dollars * 100); // Converting entered amount by 100, o factor with coin integer
    
    printf("Following is minimal number"
           "of change for %d: ", 
           cents); 
    
    calcDraw(cents);
    
    return 0;
    // printf("%i\n", *calcDraw(cents));
}	

