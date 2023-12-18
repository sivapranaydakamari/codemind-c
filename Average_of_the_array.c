#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    float avg;
    avg=sum*1.0/n;
    printf("%.2f",avg);
}