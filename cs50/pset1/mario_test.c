#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

void func(int x)
{
   printf("func(%d): ", x);
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
 
int main(void)
{
   for(int i = 1; i < 9; ++i) func(i);
}