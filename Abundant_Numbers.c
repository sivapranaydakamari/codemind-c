#include<stdio.h>
int main()
{
    int a,i,n,sum=0;
    scanf("%d",&n);
    a=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum>a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}