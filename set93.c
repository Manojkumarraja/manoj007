#include<stdio.h>
void main()
{
long int a,b,c,d;
printf("Enter the two numbers for division");
scanf("%ld%ld",&a,&b);
c=a/b;
printf("\n%d",c);
printf("\nEnter the numbers for modulo");
scanf("%ld%ld",&a,&b);
d=a%b;
printf("\n%d",d);
}
