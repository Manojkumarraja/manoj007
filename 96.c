#include<stdio.h>
void main()
{
    int n,i,num=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            num++;
        }
    }
    if(num==0)
    {
        printf("\nNO");
    }
    else
    {
        printf("\nYES");
    }
    
}
