#include<stdio.h>
void main()
{
    int i,j,n;
    
    printf("Enter rows:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1 || j==i || j==n || i==n)
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