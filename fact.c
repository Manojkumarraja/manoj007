#include<stdio.h>
void main()
{
 int a,fact,i;
 printf("Enter a number");
 scanf("%d",&a);
 fact=1;
 for(i=a;i>=1;--i)
 {
    fact*=i; 
 }
 printf("\n Factorial of the given number is%d",fact);
}
