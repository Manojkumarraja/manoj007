#include<stdio.h>
void main()
{
    int first,diff,v,sum=0,i,terms;
    printf("Enter a number of terms");
    scanf("%d",&terms);
    printf("\nEnter a first num and diff");
    scanf("%d%d",&first,&diff);
    v=first;
    for(i=0;i<terms;i++)
    {
        sum+=v;
        v+=diff;
    }
    printf("\nArithematic progresseion of terms %d is %d",terms,sum);
}
