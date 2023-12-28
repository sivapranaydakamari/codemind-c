#include<stdio.h>
int main()
{
    char s[20],dc=0;
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        dc++;
    }
    printf("%d",dc);
}