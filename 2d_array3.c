#include<stdio.h>
int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9},i,j,sum=0;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n");
	int b[3][3]={1,2,3,4,5,6,7,8,9};
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(b[i][j]!=4 && b[i][j]!=9)
			{
				printf("%d  ",b[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
		printf("%d \t", a[i][j]+b[i][j]);
		}
		printf("\n");
		}
	return 0;
}