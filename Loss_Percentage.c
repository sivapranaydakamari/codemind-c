#include<stdio.h>
int main()
{
    float cp,sp,loss,losspercentage;
    scanf("%f%f",&cp,&sp);
    loss=cp-sp;
    losspercentage=(loss/cp)*100;
    printf("%.2f",losspercentage);
}