#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,m,r,d=0,count=0;
    scanf("%d",&n);
    t=n;
    m=n;
    while(n!=0)
    {
        r=n%10;
        count=count+1;
        n=n/10;
    }
    while(m!=0)
    {
       int r1=m%10;
       d=d+pow(r1,count);
       m=m/10;
       count--;
    }
    if(d==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}