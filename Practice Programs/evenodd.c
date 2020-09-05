#include <stdio.h>
 int main()
{
   int x;
   printf("Enter the number:");
   scanf("%d", &x);
   if(x%2==0)
    printf("The numberis even");
   else
   {
      printf("The number is odd");        
   }
   return 0;
}