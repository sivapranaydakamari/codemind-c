#include<stdio.h>
int main()
{
    char s[20],s1[20];
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(i==6)
        {
            s1[0]=s[i];
            break;
        }
    }
    printf("%s",s1);
}