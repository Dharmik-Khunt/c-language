#include<stdio.h>
void main()
{
    int a,b,c=65;

    for(a=1; a<=7; a+=2)
    {
        for(b=7; b>=a; b--)
        {
            printf(" ");
        }
        for(b=1; b<=a; b++)
        {
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
}