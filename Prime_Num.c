#include<stdio.h>
void main()
{
    int n, i, count=0;

    printf("Enter a num:");
    scanf("%d",&n);

    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    if(count<=2)
    {
        printf("%d is Prime num",n);
    }
    else
    {
        printf("%d is not Prime num",n);
    }
}