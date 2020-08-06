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
   int n_floor;

   n_floor = -1;
   while (n_floor != 0)
   {
   	 printf("Height (1-8):\n");
   	 
   	 // fgets(line, sizeof(line), stdin);
   	 int scan_f_result = scanf("%d", &n_floor);
   	 printf("\n got the scan: %d", scan_f_result);
	 printf("\n got the number of floors: %d", n_floor);

   	 if ((scan_f_result == 0) | (scan_f_result == EOF))
   	 {
   		printf("got the number: %d", scan_f_result);
   	 	
   	 	printf("\n *** You have to enter an integer! ***\n");
   	 	n_floor = -1;
   	 }
   }
   
   // const int n_floor = scanf("%i", &input);
   // printf("got the number: %d", n_floors);

   for(int i = 0; i < n_floor; ++i) func(i);
}