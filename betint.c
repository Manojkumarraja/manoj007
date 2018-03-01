#include<stdio.h>
void main()
{
    int a,b,n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("\nEnter the intervals");
    scanf("%d%d",&a,&b);
    if((n>a)&&(n<b))
    {
        printf("\nYES");
    }
    else
    {
        printf("\nNO");
    }
}

