#include<stdio.h>
void main()
{
    int n1,n2,tot;
    printf("Enter a two number");
    scanf("%d%d",&n1,&n2);
    tot=n1*n2;
    if(tot%2==0)
    {
        printf("\nEven");
    }
    else
    {
        printf("\nOdd");
    }
}
