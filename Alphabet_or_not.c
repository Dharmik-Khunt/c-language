#include<stdio.h>
void main()
{
    char al;
   
    printf("Entry:");
    scanf("%c",&al);

    if((al>='A' && al<'Z') || (al>='a' && al<'z'))
    {
        printf("%c is alphabet",al);
    }
    else
    {
        printf("%c not alphabet",al);
    }
}