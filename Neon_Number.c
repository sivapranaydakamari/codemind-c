#include<stdio.h>
int main()
{
    int i,n,r,sum=0;
    scanf("%d",&i);
    n=i*i;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(i==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}