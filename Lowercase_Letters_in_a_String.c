#include<stdio.h>
int main()
{
    char str[40];
    scanf("%[^
]s",str);
    int len=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            len+=1;
        }
    }
    printf("%d",len);
}