#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the number");
scanf("%d",&a);
if(a<0)
{
 printf("\n The given number is negative");
 }
 elseif(a==0)
 {
 printf("\n The given number is zero");
 }
 else
 {
 printf("\n The given number is positive");
 }
 getch();
 }
