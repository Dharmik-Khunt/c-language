#include<stdio.h>
void main()
{
    int n,r,sum=0;

    printf("Enter Num:");
    scanf("%d",&n);

    do
    {
        r=n%10;
        sum = sum * 10 + r;
        n=n/10;
    } 
    while(n>0);
    
    printf("Rev is:%d",sum);
}