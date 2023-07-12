#include<stdio.h>
char reverse()
{
	char a[50],b[50];
	int i,j=0;

	printf("Enter name:");
	scanf("%s",&a);

	for(i=0; a[i]!='\0'; i++)
	{}
	for(a[i]='\0'-1; i>=0; i--)
	{
		b[j]=a[i];
		j++;
	}
		b[j]='\0';
	printf("Reverse string:%s",b);
		
		
	return b[j];
	char b[50],j;	
	
}

int main()
{
	printf("Enter name:");
	scanf("%s",&a);

}