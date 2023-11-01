#include<stdio.h>
int main()
{
    int i,n,r=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            r=r+1;
        }
    }
    if(r==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}