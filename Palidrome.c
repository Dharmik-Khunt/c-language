#include<stdio.h>
int main()
{
    char a[100],rev=0,same=0;
    int i,j;

    printf("Enter string:");
    scanf("%s",&a);

    for(i=0; a[i]!='\0'; i++)
    {
        same=a[i];
    }
    for(j=i; j>=0; j--)
    {
        printf("%c",a[j]);
        rev=rev=a[j];
    }
    if(same==rev)
    {
        printf("\nPalidrome");
    }
    else
    {
        printf("\nNot palidrome");
    }
}