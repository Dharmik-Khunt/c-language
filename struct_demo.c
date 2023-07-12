#include<stdio.h>

struct StudentData
{
    int rollno,p,c,m,total;
    char name[50];
    float per;
};

    int main()
    {
        struct StudentData s_data[3];

        for (int i = 0; i < 3; i++)
        {
            printf("Enter Roll Num: ");
            scanf("%d",&s_data[i].rollno);
            printf("Enter Name: ");
            scanf("%s",&s_data[i].name);
            printf("Enter physics: ");
            scanf("%d",&s_data[i].p);
            printf("Enter chemistry: ");
            scanf("%d",&s_data[i].c);
            printf("Enter maths: ");
            scanf("%d",&s_data[i].m);

            s_data[i].total= s_data[i].p + s_data[i].c + s_data[i].m;
            
            s_data[i].per= (s_data[i].total * 100)/300;
        }
        
        printf("\n\tR.No\tName\tPhy\tChemis\tMaths\tTotal\tPercentage\n");

        for(int i=0; i<3; i++)
        {
            printf("\t%d\t%s\t%d\t%d\t%d\t%d\t%f\n",s_data[i].rollno,s_data[i].name,s_data[i].p,s_data[i].c,s_data[i].m,s_data[i].total,s_data[i].per);
        }
    }