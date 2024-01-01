#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int a,dc=0;
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(a==ar[i])
        {
            dc++;
        }
    }
    printf("%d",dc);
}