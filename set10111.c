#include<stdio.h>
void main()
{
    float pa,i,r;
    int t;
    printf("Enter the principle amount and rate and time");
    scanf("%f%f%d",&pa,&r,&t);
    i=(pa*t*r)/100;
    printf("\nSimple interest is %.2f:",i);
}
