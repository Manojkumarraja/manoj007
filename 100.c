#include<stdio.h>
void main()
{
    int a,a1,n,rem,mult=1;
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
        mult*=rem;
        a1/=10;
    }
    printf("MUltiplication of digits in given number is : %d",mult);
}
