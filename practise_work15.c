#include<stdio.h>
int main()
{
    int n1,n2;

    printf("Enter N1:");
    scanf("%d",&n1);
    printf("Enter N2:");
    scanf("%d",&n2);

    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;

    printf("\nNew N1:%d",n1);
    printf("\nNew N2:%d",n2);
    return 0;
}