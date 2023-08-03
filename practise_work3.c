#include<stdio.h>
int main()
{
    char str[]="DHARMIK";
    int i,j;

    for(i=0; i<=6; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c ",str[j]);
        }
        printf("\n");
    }
}