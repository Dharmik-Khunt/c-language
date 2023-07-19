#include<stdio.h>
int main()
{
   int a,b,c=11;

    for(a=1; a<=5; a++)
    {
        for(b=1; b<=5; b++)
        {
            printf("%d ",c++);
        }
        printf("\n");
        c+=5;
    }
}