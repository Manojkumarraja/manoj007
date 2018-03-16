#include<stdio.h>
void main()
{
    int a[20],i1,i,n;
    printf("Enter the array size");
    scanf("%d",&n);
    printf("\nEnter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i1=1;
    for(i=0;i<n;i++)
    {
        if(a[i]==i1)
        {
        }
        else
        {
            printf("%d",i1);
        }
        i1++;
    }
}
