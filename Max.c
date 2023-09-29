#include<stdio.h>

void main()
{
    int a[20], i, n, max, min;

    printf("Enter lenght : ");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        printf("Enter Number a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    max = a[0];
    min = a[0];

    for(i = 0; i < n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        else if(a[i]<min)
        {
            min = a[i];
        }
    }

    printf("\nMaximum Value : %d",max);
    printf("\nMinimum Value : %d",min);
}
