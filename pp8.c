#include<stdio.h>
int main()
{
    int a,b,c=1;

    for(a=1; a<=5; a++)
    {
        for(b=1; b<=a; b++)
        {
            printf("%d ",c%2==1);
            c++;
        }
        printf("\n");
    }
}
