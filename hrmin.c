#include<stdio.h>
void main()
{
    int hr1,min1,hr2,min2,hr3,min3;
    printf("Enter the hour and minute");
    scanf("%d%d",&hr1,&min1);
    printf("\nEnter the second hour and minute");
    scanf("%d%d",&hr2,&min2);
    hr3=hr1-hr2;
    min3=min1-min2;
    printf("\n%d\t%d",hr3,min3);
}
