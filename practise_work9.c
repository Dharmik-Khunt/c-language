#include<stdio.h>
int main()
{
    int a,b;

    for(a=5; a>=1; a--)
    {
        for(b=5; b>=a; b--)
        {
            printf(" ");
        }
        for(b=1; b<=a; b++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}