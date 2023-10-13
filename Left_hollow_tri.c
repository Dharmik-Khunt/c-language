#include<stdio.h>
void main()
{
    int a,b,n;
    printf("N:");
    scanf("%d",&n);

    for(a=1; a<=n; a++)
    {
        for(b=n; b>=a; b--)
        {
            printf("  ");
        }
        for(b=1; b<=a; b++)
        {
            if(b==1 || a==n || b==a)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}