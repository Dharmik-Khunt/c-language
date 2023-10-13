#include<stdio.h>
void main()
{
    int a[3][3] = {{8,5,1},{9,3,2},{4,6,3}};
    int b[3][3] = {{8,5,3},{9,5,7},{9,4,1}};
    int c[3][3];
    int i,j,k;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j]=0;
            for(k=0; k<3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}