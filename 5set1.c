#include<stdio.h>
void main()
{
    int n,count;
    printf("Enter the number");
    scanf("%d",&n);
    count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    printf("\nNumber of the digits are %d",count);
}
