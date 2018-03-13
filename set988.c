#include<stdio.h>
void main()
{
    int a,b,c,d,i;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    for(i=1;(a>=i)||(b>=i);i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            c=i;
        }
    }
    d=(a*b)/c;
    printf("\nLCM for the given number is %d",d);
    
}
