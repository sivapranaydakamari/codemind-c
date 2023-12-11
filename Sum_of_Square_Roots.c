#include<stdio.h>
#include<math.h>
int main()
{
    float sum=0,s,n,m;
    scanf("%f%f",&m,&n);
    for(int i=m;i<=n;i++)
    {
        s=sqrt(i);
        sum=sum+s;
    }
    printf("%.2f",sum);
}