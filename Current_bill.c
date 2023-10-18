#include<stdio.h>
int main()
{
    int unit;
    float unitscost,bill,tbill;
    scanf("%d",&unit);
    if(unit<200)
    {
        unitscost=1.20;
    }
    else if(unit>=200 && unit<400)
    {
        unitscost=1.50;
    }
    else if(unit>=400 && unit<600)
    {
        unitscost=1.80;
    }
    else
    {
        unitscost=2.00;
    }
    bill=unit*unitscost;
    if(bill>400)
    {
        tbill=bill+(bill*0.15);
    }
    else
    {
        tbill=bill+100;
    }
    printf("%.2f",tbill);
}