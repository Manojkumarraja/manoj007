#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("\n a value is greater than two other numbers");
}
else 
if(b>a&&b>c)
{
printf("\n b value is greater");
}
else
{
printf("\n c value is greater");
}
}
