#include<stdio.h>
int main()
{
    char str[40];
    scanf("%[^
]s",str);
    int dc=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            dc+=1;
        }
    }
    printf("%d",dc);
}