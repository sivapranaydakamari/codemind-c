#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n],dc=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    int avg=sum/n;
    for(int i=0;i<n;i++)
    {
        if(avg<=a[i])
        {
            dc++;
        }
    }
    printf("%d",dc);
}