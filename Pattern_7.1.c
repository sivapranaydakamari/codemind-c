#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=n-i+1;j++)
        {
            printf("* ");
        }
        printf("
");
    }
}