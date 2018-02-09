#include<stdio.h>
void main()
{
    int n,a[10][10],p1,p2,res;
    int i,j;
    printf("Enter the size of the matrix");
    scanf("%d",&n);
    printf("\nEnter the array elements");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    p1=0;
    i=0;
    for(j=0;j<n;j++)
    {
        p1+=a[i][j];
        i++;
    }
    i=0;
    p2=0;
    res=0;
    for(j=n-1;j>=0;j--)
    {
        p2+=a[i][j];
        i++;
    }
    res=p1*p2;
    printf("\n%d",res);
}
