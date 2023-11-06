#include<stdio.h>
int main()
{
    float salary,HRA,DA,PF,Gross;
    scanf("%f%f%f",&salary,&HRA,&DA);
    PF=0.12*salary;
    Gross=salary+HRA+DA+PF;
    printf("%.2f
%.2f",PF,Gross);
}