#include<stdio.h>
int selfdiv(int n);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int n=a;n<=b;n++)
    {
        if(selfdiv(n))
        {
            printf("%d ",n);
        }
    }
}
int selfdiv(int n)
{
    int r,flag=1,t=n;
    while(n!=0)
    {
        r=n%10;
        if(r==0 || t%r!=0)
        {
            flag=0;
            break;
        }
        n=n/10;
    }
    if(flag==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}