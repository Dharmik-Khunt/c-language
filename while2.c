#include<stdio.h>
int main()
{
    int i,sum=0;

    i=1;
    while (i<=10)
    {

         sum=sum+i;
        printf("%d ",i);
        i++;
       
    }

    printf("\nSum is:%d",sum);
}