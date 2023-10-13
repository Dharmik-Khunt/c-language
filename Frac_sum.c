#include<stdio.h>
void main()
{
    int a=1, n, i;
    float sum=1;

    printf("Enter N:");
    scanf("%d",&n);
    printf("%d ",a);

    for(i=2; i<=n; i++)
    {
        printf("%d/%d ",a,i);
        sum = sum + (a/i);
    }
    printf("\nsum is:%f",sum);
}