#include<stdio.h>
int main()
{
    int num,i,sum=0;

    printf("Enter the num:");
    scanf("%d",&num);

    for(i=1; i<num; i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    
    if(num==sum)
    {
        printf("Num is perfect");
    }
    else
    {
        printf("\nNot perfect");
    }
}