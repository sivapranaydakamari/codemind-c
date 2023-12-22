#include<stdio.h>
int main()
{
    int n,m,sum=0,sum1=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]%2==0)
            sum+=a[i][j];
            else
            sum1+=a[i][j];
        }
    }
    printf("%d %d",sum,sum1);
}