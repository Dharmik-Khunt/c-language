#include<stdio.h>
int main()
{
    char i[]= "SKILL";
    char a,b;

    for(a=1; a<=5; a++)
    {
        for(b=1; b<=a; b++)
        {
            for(i=0; i<=5; i++)
            {
                printf("%c",b[i]);
            }
            
                
        }
        b++;
        printf("\n");
    }
}