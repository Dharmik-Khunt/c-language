#include<stdio.h>
int main()
{
    int a[100],max, min,i,size;

    printf("Enter size of array:");
    scanf("%d",&size);

    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];

    for(i=0; i<size; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }
    }

    printf("Max is: %d",max);
    printf("\nMin is: %d",min);

}