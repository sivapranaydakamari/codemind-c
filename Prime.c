#include<stdio.h>
int main()
{
    int n,i,fac=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            fac+=1;
        }
    }
    if(fac==2)
    printf("Prime");
    else
    printf("Not Prime");
}