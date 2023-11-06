#include<stdio.h>
int main()
{
    int x,hour,min;
    scanf("%d",&x);
    hour=x/60;
    min=x%60;
    printf("%d Hour(s) %d Minute(s)",hour,min);
}