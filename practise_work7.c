#include<stdio.h>
int main()
{
        
        int i,j,d,c=65;

        for(i=1; i<=5; i++)
        {
            for(j=1; j<=i; j++)
            {
                if(d%2!=0)
                {
                    printf("%c ",c+32);
                    
                }
                else
                {
                    printf("%c ",c);
                }
                c++;

            }
            
            
            printf("\n");
            d++;
        }   
}