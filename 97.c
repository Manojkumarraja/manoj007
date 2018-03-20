#include<stdio.h>
void main()
{
    int a,n,rem,rev=0,a1;
    printf("Enter a number");
    scanf("%d",&a);
    a1=a;
    while(a!=0)
    {
        a/=10;
        n++;
    }
    while(a1!=0)
    {
        rem=a1%10;
        rev=rev*10+rem;
        a1/=10;
    }
    printf("\nReverse of given number is :%d",rev);
}
