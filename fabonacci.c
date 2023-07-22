#include<stdio.h>
int fabonacci(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else 
    {
        return fabonacci(num-1)+fabonacci(num-2);
    }
}

int main()
{
    int num,i;

    printf("Enter the num:");
    scanf("%d",&num);

    for(i=1; i<num; i++)
    {
        printf("%d ",fabonacci(i));
    }
}