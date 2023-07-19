#include<stdio.h>
int main()
{
    char i,n;

    

    for(i=65; i<=90; i++)
    {
      if(i%2==0)
      {
        printf("%c ",i+32);
      }
      else 
      {
        printf("%c ",i);
      }
    }
    
}