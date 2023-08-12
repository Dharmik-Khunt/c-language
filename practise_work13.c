#include<stdio.h>
int main()
{
    char str[]="CHARUSAT";

    for(int a=0; a<=7; a++)
    {
        for(int b=7; b>=a; b--)
        {
            printf(" ");
        }
        for(int b=0; b<=a; b++)
        {
            printf("%c ",str[b]);
        }
        printf("\n");
    }

     for(int a=7; a>=0; a--)
    {
        for(int b=7; b>=a; b--)
        {
            printf(" ");
        }
        for(int b=0; b<=a; b++)
        {
            printf("%c ",str[b]);
        }
        printf("\n");
    }
    return 0;
    
}