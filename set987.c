#include<stdio.h>
void main()
{
    int a,b,i,d;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    for(i=1;(a>=i)||(b>=i);i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            d=i;
        }
    }
    printf("\nGCD for given number is %d",d);
}
