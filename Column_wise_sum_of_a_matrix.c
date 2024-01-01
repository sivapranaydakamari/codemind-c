#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int ar[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        int sum=0;
        for(j=0;j<n;j++)
        {
            sum+=ar[j][i];
        }
        printf("%d ",sum);
    }
}