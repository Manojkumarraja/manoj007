#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    while(a%2==0)
    {
        a/=2;
    }
    while(b%2==0)
    {
        b/=2;
    }
    printf("%d\n%d",a,b);
}
