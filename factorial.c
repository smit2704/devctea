#include <stdio.h>
void main()
{
    int a,fact=1,i;
    printf("Enter a number");
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        fact*=i;
    }
    printf("The factorial of %d=%d",a,fact);
}