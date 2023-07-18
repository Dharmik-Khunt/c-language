#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter N:");
    scanf("%d",&n);

    for(i=-n; i<=n; i++)
    {
        printf("%d ",i);
    }
}