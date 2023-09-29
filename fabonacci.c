#include<stdio.h>
void main()
{
    int num, n1, n2, n3, i;

    printf("Enter num:");
    scanf("%d",&num);

    n1=0;
    n2=1;

    printf("%d %d ",n1,n2);

    for(i=1; i<num; i++)
    {
        n3 = n1 + n2;
        n1=n2;
        n2=n3;
        printf("%d ",n3);
    }
}