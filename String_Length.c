#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    scanf("%[^
]s",str);
    int res=strlen(str);
    printf("%d",res);
}