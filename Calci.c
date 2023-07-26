#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three value:");
    scanf("%d %d %d",&a, &b, &c);

    if(a>b)
    {
        if(a>c)
        {
            printf("Ans: %d",a);
        }
        else 
        {
            printf("Ans: %d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("Ans: %d",b);
        }
        else
        {
            printf("Ans: %d",c);
        }
    }
}