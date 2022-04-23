#include <stdio.h>
#include <conio.h>
void main()
{
    int num,i;
    printf("enter the number");
    scanf("%d",&num);
    printf("factors of %d are:",num);
    for (i=1; i<=num; i++)
    {
        if (num % i==0)
        {
            printf("%d, ",i);
        }
    }
}    