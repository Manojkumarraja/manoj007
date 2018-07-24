#include<stdio.h>
void main()
{
    char a[10],b[10];
    int i,j,sum=0,n,n1;
    printf("Enter the size of two strings");
    scanf("%d%d",&n,&n1);
    printf("Enter two strings");
   for(i=0;i<n;i++)
   {
       scanf("%c",&a[i]);
   }
   for(i=0;i<n1;i++)
   {
       scanf("%c",&b[i]);
   }
    for(i=0;((a[i]!='\0')||(b[i]!='\0'));i++)
    {
        if(a[i]!=b[i])
        {
    sum++;
        }
    }
    if(sum==1)
    {
        printf("\nYES");
    }
    else
    {
        printf("\nNO");
    }
}
