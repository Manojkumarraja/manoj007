#include<stdio.h>
void main()
{
int a,b,c[50],sum,i;
printf("Enter the number a and b");
scanf("%d%d",&a,&b);
sum=0;
for(i=0;i<a;++i)
{
scanf("%d",&c[i]);
}
for(i=0;i<b;++i)
{
sum+=c[i];
}
printf("%d",sum);
}
