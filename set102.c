#include<stdio.h>
void main()
{
    int a[10],n,i,sum=0;
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("\nEnter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("\nThe sum of the array elements is :%d",sum);
}
