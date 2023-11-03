#include<stdio.h>
#include<math.h>
int power(int base,int a)
{
    if(a!=0)
    {
        return base*power(base,a-1);
    }
    else
    {
        return 1;
    }
}
void main()
{
    int base,a,result;
    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter power:");
    scanf("%d",&a);
    result = pow(base,a);
    printf("Ans is:%d",result);
}