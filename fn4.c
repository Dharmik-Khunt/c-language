#include<stdio.h>

int pr()
{
	int num,sum=0,i;
	printf("Enter any number:");
	scanf("%d",&num);

	for(i=1; i<num; i++)
	{
		if(num%i==0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}
	}

	if(sum==num)
	{
		printf("\nperfect  number ");
	}
	else
	{
		printf("\nnon-perfect number");

	}
		return sum;    
}
 
int main()
{
	pr();	
}