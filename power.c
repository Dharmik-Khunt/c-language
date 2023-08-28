#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,ans;

    printf("Enter the num:");
    scanf("%d",&a);

    b=a/10;
    printf("B:%d",b);

    c=a-(b*10);
    printf("\nC: %d",c);

    ans=pow(b,c);
    printf("\nAns:%d",ans);

    return 0;
}