#include<stdio.h>
int main()
{
    int n,a,b,g;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            g=i;
        }
    }
    printf("%d",g);
}