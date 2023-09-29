#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,j=0;

    printf("Enter name:");
    scanf("%s",&a);

    for(i=1; a[i]!='\0'; i++)
    {}
        for(a[i]='\0'-1; i>=0; i--)
        {
            b[j]=a[i];
            j++;
        }
        b[j]='\0';
        j++;
        printf("reverse is:%s",b);
       
}