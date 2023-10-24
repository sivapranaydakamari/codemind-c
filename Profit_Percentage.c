#include<stdio.h>
int main()
{
    float x,y,pp;
    scanf("%f%f",&x,&y);
    pp=(y-x)/x*100.0;
    printf("%.2f",pp);
}