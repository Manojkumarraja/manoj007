#include<stdio.h>
void main()
{
    int a[10],n,i,min,max;
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("\nEnter the array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\nThe maximum value in the array is %d",max);
    printf("\nThe minimum value in the array is %d",min);
}
