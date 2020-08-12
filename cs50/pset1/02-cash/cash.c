// C program to find minimum 
// number of denominations 
#include <stdio.h> 
#include <math.h>
#define COINS 4 
#define NOTES 9
#define MAX 20 
  
// All denominations of Indian Currency 
int notes[NOTES] = { 1, 2, 5, 10, 20, 
                     50, 100, 200, 2000 }; 

int coins[COINS] = { 1, 5, 10, 25 }; 
  
void findMin(int cost) 
{ 
    int coinList[MAX] = { 0 }; 
    int i, k = 0; 
  
    for (i = COINS - 1; i >= 0; i--) { 
        while (cost >= coins[i]) { 
            cost -= coins[i]; 
            // Add coin in the list 
            coinList[k++] = coins[i]; 
        } 
    } 
  
    // for (i = 0; i < k; i++) { 
    //     // Print 
    //     printf("%d ", coinList[i]); 
    // } 
    printf("%d ", sizeof(coinList));
    return;
} 
  
int main(void) 
{ 
    // input value
    float dollars;

    do
    {
        printf("\nInsert Money:\n");
        printf("$");
        scanf("%f", &dollars ); // Get value from terminal
        printf("%f\n", dollars);
        
        int cents = (int)round(dollars * 100);

        printf("Following is minimal number "
               "of change for %d: ", 
               cents); 
        findMin(cents); 
        printf("Fina"
               "of change for %d: ", 
               cents); 
        findMin(cents); 
        //   return 0;
    } while (dollars != 0.0);
}