#include<stdio.h>
void main()
{
    int i, j, n, temp=0, a[100];

    printf("Enter limit:");
    scanf("%d",&n);
    printf("enter %d numbers:",n);

    for(i=0; i<n; i++)
    {
        scanf("%d ",&a[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=i; j<n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n---Ascending Order---");
    for(i=0; i<n; i++)
    {
        printf("\n%d ",a[i]);
    }

}