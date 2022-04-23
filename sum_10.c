#include <stdio.h>
#include <conio.h>
void main()
{
    int i,sum=0;
    for (i=1; i<=10; i++){
    sum+=i;
    if(i<10)    printf("%d(%d) + ",i,sum);
    else    printf("%d(%d) = ",i,sum);
    }
    printf(" %d",sum);
    printf("\n");
    printf("The sum is %d",sum);
}