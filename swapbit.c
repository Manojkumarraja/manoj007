#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    printf("\nValues before swapping a=%d b=%d",a,b);
    (a^=b),(b^=a),(a^=b);
   
    printf("\nValues after swapping a=%d b=%d",a,b);
}
