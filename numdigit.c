#include<stdio.h>
void main()
{
int a,num;
printf("Enter a number");
scanf("%d",&a);
num=0;
while(a!=0)
{
num++;
a=a/10;
}
printf("\nNumber of digits in integer is %d",num);
}
