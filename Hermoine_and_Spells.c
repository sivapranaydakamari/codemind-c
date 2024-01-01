#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<b+c && b+c>c+a)
    {
        printf("%d",b+c);
    }
    else if(a+b>b+c && a+b>c+a)
    {
        printf("%d",a+b);
    }
    else
    {
        printf("%d",c+a);
    }
}