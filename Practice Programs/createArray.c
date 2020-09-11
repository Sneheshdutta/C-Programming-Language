#include <stdio.h>
int main()
{
int x,i;
int a[60];
printf("Enter the total number of elements must be below 60:");
scanf("%d",&x);
printf("Enter the eloements of array:");
for(i=0;i<x;i++);
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<x;i++)
    {
        printf("%d",&a[i]);
    }
}