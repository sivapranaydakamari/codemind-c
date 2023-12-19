#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,sum1=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            sum=sum+a[i];
        }
        else
        {
            sum1=sum1+a[i];
        }
    }
    printf("%d",abs(sum-sum1));
}