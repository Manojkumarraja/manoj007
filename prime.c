#include<stdio.h>
void main()
{
    int a,count,i;
    printf("Enter the number");
    scanf("%d",&a);
    count=0;
    for(i=2;i<=a;i++)
{
    if(a%i==0)
    {
        count++;
    }
}
    if(count==1)
    {
        printf("\nPrime number");
        
    }
    else
    {
        printf("Not Prime number");
    }
}
