#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
   int n;
   printf("INPUT: ");
   scanf("%d", &n);
   printf("OUTPUT: ");
   if (n < 4)
   {
      printf("\n-1");
   }
   else if (n % 4 == 0)
   {
      printf("%d", n / 4);
   }
   else if (n % 4 == 1)
   {
      if (n < 9)
      {
         printf("\n-1");
      }
      else
      {
         printf("%d", (n - 9) / (4) + 1);
      }
   }
   else if (n % 4 == 2)
   {
      printf("%d", (n - 6) / (4) + 1);
   }
   else
   {
      if (n < 15)
      {
         printf("\n-1");
      }
      else
      {
         printf("%d", (n - 15) / (4) + 2);
      }
   }
   return 0;
}