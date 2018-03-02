#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbres");
    scanf("%d%d",&a,&b);
    c=a*b;
    if(a==b)
    {
        printf("\nYES perfect square");
    }
    else
    {
        printf("\nNOT perfect square");
    }
}
