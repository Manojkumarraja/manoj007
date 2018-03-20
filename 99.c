#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    d=(a*b)%c;
    printf("\n%d",d);
}
