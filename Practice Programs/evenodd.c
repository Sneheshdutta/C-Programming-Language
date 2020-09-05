#include <stdio.h>
 main()
{
   float x;
   printf("Enter the number:");
   scanf("%f"&x);
   if(x%2==0)
    printf("The numberis even");
   else
   {
      printf("The number is odd");        
   }
   return 0;
}