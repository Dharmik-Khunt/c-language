#include<stdio.h>
int main()
{
    int i, sum=0;

    for(i=1; i<=10; i++)
    {
        printf("%d ",i);
        sum = sum + i;
    }
    printf("\nSum is:%d",sum);
    return 0;
}