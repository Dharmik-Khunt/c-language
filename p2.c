#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter N:");
    scanf("%d",&n);

    for(i=0; i<=n; i+=2)
    {
        printf("%d ",i);
    }
}