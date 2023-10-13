#include<stdio.h>
void main()
{
    int a[20], i, j, n, c, b;

    printf("Enter lenght : ");
    scanf("%d",&n);

    for( i = 0; i < n; i++)
    {
        printf("Enter Number a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    //printf("Enter Extra Value Below : \n");

    printf("Enter Value of Index : ");
    scanf("%d",&b); 

    for(j = b; j <= b; j++)
    {
        printf("Enter Value : ");
        scanf("%d",&a[j]);
    }

    a[i] = a[j];

    for(c = b+1; c < n+1; c++)
    {
        a[i] = a[c];
    }
    
    for(i = 0; i < n+1; i++)
    {
        printf("\na[%d] : %d",i,a[i]+1);
    }
}
