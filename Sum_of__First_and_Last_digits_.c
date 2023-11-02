#include<stdio.h>
int main()
{
    int i,n,r,r1,r2,sum,rev=0;
    scanf("%d",&n);
    r1=n%10;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    r2=rev%10;
    sum=r1+r2;
    printf("%d",sum);
}