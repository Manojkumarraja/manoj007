#include<stdio.h>
void main()
{
int a,i,b;
printf("Enter the number");
scanf("%d",&a);
b=0;
for(i=1;i<=a;++i)
{
   b+=i;
}
printf("\nsum of given number is %d",b);
}
