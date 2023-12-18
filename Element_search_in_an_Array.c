#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int se;
    scanf("%d",&se);
    for(int i=0;i<n;i++)
    {
        if(a[i]==se)
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