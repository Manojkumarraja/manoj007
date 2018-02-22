#include<stdio.h>
void main()
{
    int n,a[15]={1,2,3,4,5,6,7,8,9,10},i;
    int num;
    printf("Enter the number");
    scanf("%d",&n);
    num=0;
    for(i=0;a[i]<=10;i++)
    {
        if(n==a[i])
        {
            num++;
        }
    }
    if(num==1)
    {
        printf("\nYes");
    }
    else
    {
        printf("\nNo");
    }
}
