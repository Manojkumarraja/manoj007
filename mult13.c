#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%13==0)
    {
        printf("\nYES");
    }
    else
    {
        printf("\nNO");
    }
}
