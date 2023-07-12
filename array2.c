#include<stdio.h>
int main()
{
	int p[5], c[5], m[5], total,per;
	for(int i=0; i<5; i++)
	{
		printf("Enter p: ");
		scanf("%d",&p[i]);
		
		printf("Enter c:");
		scanf("%d",&c[i]);
		
		printf("Enter m:");
		scanf("%d",&m[i]);
		total=p[i]+c[i]+m[i];
		printf("Total is:%d\n",total);
		per=(total*100)/300;
		printf("Percentage is:%d\n",per);
		if(per<=30)
		{
			printf("Fail");
		}
		else if(per<=50)
		{
			printf("D Grade");
		}
		else if(per<=70)
		{
			printf("C Grade");
		}
		else if(per<=90)
		{
			printf("B Grade");
		}
		else
		{
			printf("A Grade");
		}
	}
	return 0;
}