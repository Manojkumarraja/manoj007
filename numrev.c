#include<stdio.h>
void main()
{
    int a,rem,num;
    printf("Enter the number");
    scanf("%d",&a);
    num=0;
    while(a!=0)
    {
        rem=a%10;
        num=num*10+rem;
        a/=10;
    }
    printf("reverse of the given number is %d",num);
    
}
