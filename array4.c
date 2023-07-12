#include<stdio.h>
int main()
{
	int a[10], num, odd_sum=0, even_sum=0;

	printf("Enter value\n");
	scanf("%d",&num);
	for(int i=0; i<10; i++)
	{
	  if(i%2==0)
		even_sum = even_sum + i;
	else
		odd_sum = odd_sum + i;
	}
	printf("odd sum =%d\n",odd_sum);
	printf("even sum =%d\n",even_sum);
} 