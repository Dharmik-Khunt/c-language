#include<stdio.h>
int main()
{
    char a[100],same=0, rev=0;
    int i,j;

    printf("Enter name:");
    scanf("%s",&a);

    for(i=0; a[i]!='\0'; i++)
    {
        same = a[i];
    }
    for(j=i; j>=0; j--)
    {
        printf("%c",a[j]);
        rev = a[j];
    }

    if(same == rev)
    {
        printf("\nIs palidrome");
    }
    else
    {
        printf("\nNot palidrome");
    }
    return 0;

}