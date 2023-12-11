#include<stdio.h>
int main()
{
    int n,sum=0,a,sum1,s,sub;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=i*i;
        sum=sum+a;
        sum1=sum1+i;
    }
    s=sum1*sum1;
    sub=s-sum;
    printf("%d",sub);
}