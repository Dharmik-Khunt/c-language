#include<stdio.h>
int main()
{
    char str[]="CHARUSAT";

    for(int i=0; i<=7; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c ",str[j]);
        }
        printf("\n");
    }
    return 0;
}