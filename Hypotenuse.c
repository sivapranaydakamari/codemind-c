#include<stdio.h>
#include<math.h>
int main()
{
   float h,s1,s2;
   scanf("%f%f",&s1,&s2);
   h=sqrt((s1*s1)+(s2*s2));
   printf("%.2f",h);
}