#include<stdio.h>
void main()
{
    int a[10],n,i,j,num;
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("\nEnter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    num=a[0];
    for(i=0;i<n;i++)
    {
        if(num<a[i])
        {
            num=a[i];
            
        }
    }
        printf("\nLargest number in the rray is %d",num);
}
