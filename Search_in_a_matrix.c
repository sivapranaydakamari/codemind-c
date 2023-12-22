#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int se,c=0;
    scanf("%d",&se);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(se==a[i][j])
            {
                c=1;
                break;
            }
        }
    }
    if(c==1)
    printf("1");
    else
    printf("0");
}