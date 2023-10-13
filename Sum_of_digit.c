#include<stdio.h>
void main()
{
    int num, rem, i, sum=0;

    printf("enter a num:");
    scanf("%d",&num);

    for(i=0; i<=num; i++)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of digits is:%d",sum);
}