#include<stdio.h>
int main()
{
    int num, i, sum=0;

    printf("Enter the num:");
    scanf("%d",&num);

    for(i=1; i<num; i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
            sum = sum + i;
        }
    }

    if(sum == num)
    {
        printf("\nNum is perfect");
    }
    else
    {
        printf("Num is not perfect");
    }
    return 0;

}