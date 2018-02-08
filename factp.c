#include<stdio.h>
void main()
{
int a,i,fact;
printf("Enter the number");
scanf("%d",&a);
fact=1;
for(i=a;i>0;i--)
{
    fact*=i;
}
printf("\nFactorial of given number is %d",fact);
}
