#include<stdio.h>
int main()
{
    int n,m,x,y,sum=0;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    for(int i=n;i<=m;i++)
    {
        if(i%x==0 && i%y!=0)
        {
          sum=sum+i;
        }
    }
    printf("%d",sum);
}