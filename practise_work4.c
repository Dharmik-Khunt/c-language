#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,j;

    printf("Enter name: ");
    scanf("%s",&a);
    printf("Enter surname: ");
    scanf("%s",&b);

    for(i=0; a[i]!='\0'; i++)
    {}
    
        for(j=0; b[j]!='\0'; j++)
        {
            a[i]=b[j];
            i++;
        }
    
    a[i]='\0';
    printf("\nFull name is: %s",a);
}