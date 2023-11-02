#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    float comp,in;
    scanf("%d%d%d",&p,&r,&t);
    in=p*pow((1+r/100.0),t);
    comp=in-p;
    printf("%.2f",comp);
}