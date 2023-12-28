#include<stdio.h>
int main()
{
    char s[20];
    scanf("%[^
]s",s);
    int i,temp,len=0;
    for(i=0;s[i]!=NULL;i++)
    {
        len++;
    }
    i=0;
    int j=len-1;
    while(i<=j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    printf("%s",s);
}