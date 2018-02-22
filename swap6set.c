#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    printf("\nValues before swapping a=%d b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nValues after swapping a=%d b=%d",a,b);
}
