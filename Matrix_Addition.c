#include<stdio.h>
int main()
{
    int r1,c1;
    scanf("%d%d",&r1,&c1);
    int ar[r1][c1],i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int r2,c2;
    scanf("%d%d",&r2,&c2);
    int ar1[r2][c2];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&ar1[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",ar[i][j]+ar1[i][j]);
        }
        printf("
");
    }
}