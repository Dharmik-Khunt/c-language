#include<stdio.h>
int main()
{
    int n1,n2,i;
    
    printf("From:");
    scanf("%d",&n1);
    printf("To:");
    scanf("%d",&n2);

    for(i=n1; i<=n2; i++)
    {
        if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
        {
             printf("%d ",i);
        }
    }
}