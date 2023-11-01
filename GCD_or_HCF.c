#include<stdio.h>
int main()
{
    int i,a,b,m,g;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if((a*i)%b==0)
        {
            m=a*i;
            break;
        }
    }
    g=(a*b)/m;
    printf("%d",g);
}    
   