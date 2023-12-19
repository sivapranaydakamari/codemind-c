#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int se,flag=1;
    scanf("%d",&se);
    for(int i=0;i<n;i++)
    {
        if(i%2==0&&a[i]%2!=0)
        {
            flag=0;
        }
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
}