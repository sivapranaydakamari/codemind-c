#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    for(int i=m+1;i<n;i++)
    {
        printf("%d ",i);
        printf("%d ",i*i);
        printf("%d
",i*i*i);
    }
}