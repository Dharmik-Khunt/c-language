#include<stdio.h>
int main()
{
    int i,n1=-1,n2=1,n3,n;
    printf("Enter the any value:");
    scanf("%d",&n);
    for(i=1;i<=n; i++)
    {
        n3=n2+n1;
        printf("%d\t",n3);
        n1=n2;
        n2=n3;
        
    }
    return 0;
}