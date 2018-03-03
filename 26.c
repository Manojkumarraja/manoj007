#include<stdio.h>
void main()
{
    int a[10],n,n1,j,i;
    printf("Enter the array size");
    scanf("%d",&n);
    printf("\nEnter the array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            n1=a[i];
            a[i]=a[j];
            a[j]=n1;
        }
    }
    }
    printf("%d",a[(n-1)/2]);
}
