#include<stdio.h>
int main()
{
    int n,sum=0,avg;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            c=1;
            break;
        }
    }
    if(c==1)
    printf("True");
    else
    printf("False");
}