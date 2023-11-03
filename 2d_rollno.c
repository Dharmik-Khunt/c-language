#include<stdio.h>
void main()
{
    int stud[30][20],i,j;
    //printf("\nEnter the rollno and marks:");
    for(i=0;i<20;i++)
    {
        printf("\nEnter the rollno and marks:");
        scanf("%d%d",&stud[i][0],&stud[i][1]);

    }
    printf("\nRollNo\tmarks");
    for(i=0;i<20;i++)
    {
        printf("\n%d\t%d\n",stud[i][0],stud[i][1]);
    }
}