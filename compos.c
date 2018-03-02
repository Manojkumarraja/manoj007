#include<stdio.h>
void main()
{
    int a,i,count=0;
    printf("Enter a number");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("\nYES");
    }
    else
    {
        printf("\nNO");
    }
}
