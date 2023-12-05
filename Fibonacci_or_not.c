#include<stdio.h>
int main()
{
    int fib1=0,fib2=1,fib3,n,c=0;
    scanf("%d",&n);
    fib3=fib1+fib2;
    for(int i=1;i<=n;i++)
    {
        fib1=fib2;
        fib2=fib3;
        if(n==fib3)
        {
            c++;
            break;
        }
        fib3=fib1+fib2;
    }
    if(c>=1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}