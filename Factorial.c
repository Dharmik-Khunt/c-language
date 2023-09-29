#include<stdio.h>
void main()
{
    int n,i,b=1;
    printf("Enter num:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        b= b*i;
    }
    printf("%d",b);
    
}