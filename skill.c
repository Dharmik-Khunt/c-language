#include<stdio.h>
int main()
{
    char str[]="SKILL";

    for(int i=0; i<=4; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c ",str[j]);
        }
        printf("\n");
    }
}