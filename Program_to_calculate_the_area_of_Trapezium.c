#include<stdio.h>
int main()
{
    float base1,base2,h,t;
    scanf("%f%f%f",&base1,&base2,&h);
    t=0.5*(base1+base2)*h;
    printf("%.4f",t);
}