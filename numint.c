#include<stdio.h>
void main ()
{
int a,num;
printf("Enter the integer num");
scanf("%d",&a);
num=0;
while(a!=0)
{
a/=10;
++num;
}
printf("%d",num);
}
