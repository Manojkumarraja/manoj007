
#include<stdio.h>
void main()
{
    int a[5][5],i,j,n,sum;
    printf("Enter the size of the matrix");
    scanf("%d",&n);
    printf("\nEnter the matrix elements");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            
        }
    }
j=0;
sum=0;
for(i=0;i<n;i++)
{
    sum+=a[i][j];
    j++;
}
printf("\nSum of the diagonals are %d",sum);
}
