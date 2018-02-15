#include<stdio.h>
void main()
{
    int a[10],n,i;
    printf("Enter the array size");
    scanf("%d",&n);
    printf("\nEnter the array elemnts");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d\t%d",a[i],i);
    }
}
