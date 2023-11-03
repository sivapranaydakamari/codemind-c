#include<stdio.h>
int main()
{
    int i,T,N,M,K;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d%d",&N,&M,&K);
        if((M-K)>=N)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}