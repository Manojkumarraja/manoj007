#include<stdio.h>
void main()
{
int a,a1,rem,sum=0;
printf("Enter the number");
scanf("%d",&a);
a=a1;
while(a>0)
{
rem=a%10;
sum=sum+(rem*rem*rem);
a=a/10;
}
if(a1==sum)
{
printf("\n Armstrong number");
}
else
{
printf("\n Not an armstrong number");
}
}
