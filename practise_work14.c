#include<stdio.h>
int main()
{
    char a=65;
    int i,j,d=0;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(d%2==0)
            {
                printf("%c ",a);
            }
            else
            {
                printf("%c ",a+32);
            }
            a++;
                
        }
        
         
        printf("\n");
        d++;
    }
}