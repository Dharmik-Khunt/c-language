#include<stdio.h>
int main()
{
    char str[]="KITTUUU";
    int i,j;

    for(i=0; i<=6; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c ",str[j]);
        }
        printf("\n");
    }
    return 0;
}