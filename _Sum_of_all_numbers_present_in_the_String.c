#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^
]s",str);
    int sum=0,i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            sum+=str[i]-'0';
        }
    }
    str[i]=NULL;
    printf("%d",sum);
}