#include<stdio.h>
void main()
{
    int a[10],n,i,sum=0,avg;
    printf("Enter the siZe of array");
    scanf("%d",&n);
    printf("Enter five numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     sum=sum+a[i];   
    }
    avg=(sum/5);
    printf("\nAverage of given number %d",avg);
}
