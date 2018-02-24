#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1;
int i,j,rem,a[10],count;
clrscr();
printf("Enter a number\n");
scanf("%d",&n);
n1=n;
count=0;
while(n!=0)
{
 count++;
 n/=10;
 }
 j=count-1;
 while(n1!=0)
 {
 rem=n1%10;
 for(i=j;i>=j;i--)
 {
 a[j]=rem;
 }
 j--;
 n1/=10;
 }
 printf("\n");
 for(i=0;i<count;i++)
 {
 printf("\t%d",a[i]);
 }
 getch();
 }
