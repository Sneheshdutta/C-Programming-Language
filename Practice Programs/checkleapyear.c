#include <stdio.h>
int main ()
{
    int y;
    printf("Enter the Year:");
    scanf("%d",&y);
    if((y%100==0) && (y%400==0))
        printf("%d is a Leapyear",y);
    else if(y%4==0)
            printf("%d is a Leap year",y);
        else
        {
            printf("%d is not a Leapyear",y);
        }
    return 0;    
}