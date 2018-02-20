#include<stdio.h>
void main()
{
 char a[10];
 int i,count=1;
 printf("Enter the string");
 scanf("%s",&a);
 for(i=0;a[i]='\0';i++)
 {
     if(a[i]==' ')
     {
         count++;
     }
 }
 printf("\nnumber of words %d",count);
}
