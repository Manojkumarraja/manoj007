#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a-b;
    if(c%2==0)
    {
        printf("\nYES EVEN");
    }
    else
    {
        printf("\nNO ODD");
    }
}
