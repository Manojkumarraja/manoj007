#include<stdio.h>
void main()
{
    char a[10];
    int i,sum,n;
    n=0;
    sum=0;
    printf("Enter number as string");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='1'||a[i]=='0')
        {
         sum++;   
        }
        n++;
    }
    if(sum==n)
    {
        printf("\nYES");
    }
    else
    {
        printf("\nNO");
    }
}
