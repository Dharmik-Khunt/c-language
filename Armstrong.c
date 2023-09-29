#include<stdio.h>
#include<math.h>
void main()
{
    int sum=0, on, n, i, r, length;

    printf("Enter a num:");
    scanf("%d",&n);
    printf("Enter length:");
    scanf("%d",&length);

    on = n;
    for(i=1; i<=n; i++)
    {
        r = on % 10;
        sum = sum + pow(r,length);
        on = on / 10;
    }

    if(n == sum)
    {
        printf("%d is armstrong num",n);
    }
    else
    {
        printf("%d is not armstrong num",n);
    }
}