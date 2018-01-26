#include<stdio.h>
void main()
{
    int a,b,i,pow;
    printf("Enter the number and its power");
    scanf("%d%d",&a,&b);
    pow=1;
    for(i=0;i<b;++i)
    {
        pow*=a;
    }
    printf("\n power of given number is %d",pow);
}
