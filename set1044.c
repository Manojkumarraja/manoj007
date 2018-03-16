#include<stdio.h>
void main()
{
    int i,a[10],n,k;
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("\nEnter the number of element to be printed");
    scanf("%d",&k);
    printf("\nEnter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n%d th element of the array :%d",k,a[k-1]);
}
