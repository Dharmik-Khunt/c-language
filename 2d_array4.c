#include<stdio.h>
int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9},i,j,sum=0;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
		if(i==j)
		{
		sum=sum+a[i][j];
		}
		}
	}
	printf("Sum is:%d\n",sum);
return 0;
}