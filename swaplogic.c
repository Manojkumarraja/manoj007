#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("\nValues before swap a=%d , b=%d",a,b);
    (a^=b),(b^=a),(a^=b);
    printf("\nValues after swap a=%d,b=%d",a,b);
}

