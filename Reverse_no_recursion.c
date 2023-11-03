#include<stdio.h>
static int sum=0,rem;

int revnumfun(int n)
{
    if(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        revnumfun(n/10);
    }
    else
    {
        return sum;
    }
}
void main()
{
    int n;
    printf("Enter num:");
    scanf("%d",&n);
    printf("Ans:%d",revnumfun(n));
}