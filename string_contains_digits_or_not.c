#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s1[50][50];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s1[i]);
        int dc=0;
        for(int j=0;s1[i][j]!=NULL;j++)
        {
            if(s1[i][j]>=48 && s1[i][j]<=57)
            {
                dc=1;
                break;
            }
        }
        if(dc==1)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
    }
}