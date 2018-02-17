#include<stdio.h>
void main()
{
int a[15],i,n,max;
printf("Enter the size of an array");
scanf("%d",&n);
printf("\nEnter the array values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\nThe maximum value among given numbers is %d",max);
}
