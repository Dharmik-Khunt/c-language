#include<stdio.h>
int main()
{
    int a,b;
    char str[]="DHARMIK";
    
    for(a=0; a<=6; a++)
    {
        for(b=6; b>=a; b--)
        {
            printf(" ");
        }
        for(b=0; b<=a; b++)
        {
            printf("%c ",str[b]);
        }
        printf("\n");
    }

    
    for(a=6; a>=0; a--)
    {
        for(b=6; b>=a; b--)
        {
            printf(" ");
        }
        for(b=0; b<=a; b++)
        {
            printf("%c ",str[b]);
        }
        printf("\n");
    }


}