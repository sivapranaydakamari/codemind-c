#include<stdio.h>
int main()
{
    float R,Volume;
    scanf("%f",&R);
    Volume=(4/3.0)*(3.14)*(R*R*R);
    printf("%.2f",Volume);
}