#include<stdio.h>
void main()
{
    int a[10],n,i,j,c;
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("\nEnter the array elements");
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
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    printf("\nThe sorted elements in the array are");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
