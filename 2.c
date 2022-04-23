#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The number is positive %d",a);
    }
    else
    {
         printf("The number is negative %d",a);
    }    
}