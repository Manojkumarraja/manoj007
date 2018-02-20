#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("\nValues before swap a=%d , b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping a=%d, b=%d",a,b);
}
