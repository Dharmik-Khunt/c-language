#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter value:");
    scanf("%d",&n);

    i=1;
    do
    {
        printf("%d ",i);
        i+=i;
    }
     while (i<=n);
    
}