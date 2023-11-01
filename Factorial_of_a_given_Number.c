#include<stdio.h>
int main()
{
    int i,n,muli=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       muli=muli*i; 
    }
    printf("%d",muli);
}