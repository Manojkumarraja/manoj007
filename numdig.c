#include<stdio.h>
void main()
{
    int n,rem,sum;
    printf("Enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("\nSum of digits in the given number is %d",sum);
}
