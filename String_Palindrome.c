#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%[^
]s",str);
    int len=strlen(str),flag=1;
    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}