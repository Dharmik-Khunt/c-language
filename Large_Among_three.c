#include<stdio.h>
int main()
{
    int a=201,b=200,c=880;

    if(a>b)
    {
        if(a>c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d",b);
        }
        else
        {
            printf("%d",c);
        }
    }
}