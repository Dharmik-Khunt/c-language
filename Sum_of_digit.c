#include<stdio.h>
void main()
{
    int num, sum=0, i,r;

    printf("Enter a num:");
    scanf("%d",&num);

    for(i=0; i<=num; i++)
    {
        r = num % 10;
        sum = sum + r;
        num = num / 10;
    }
    printf("Sum of digits of num is %d",sum);
}