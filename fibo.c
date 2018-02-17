#include<stdio.h>
void main()
{
int a,b,c,i,n;
printf("Enter the series size");
scanf("%d",&n);
a=1;
b=1;
printf("\n%d\t%d",a,b);
for(i=0;i<(n-2);i++)
{
c=a+b;
a=b;
b=c;
printf("\t%d",c);
}
}
