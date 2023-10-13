#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1 || j==i || i==n)
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