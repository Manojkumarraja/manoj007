#include<stdio.h>
void main()
{
    int n,i,j,rem,a[10],count;
    printf("Enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
    }
    while(n!=0)
    {
        rem=a%10;
        j=count-1;
        for(i=j;i>=j;i--)
        {
           a[j]=rem; 
        }
        j--;
        n/=10;
    }
    printf("\nDigits in the numbers are\n");
    for(i=0;i<count;i++)
    {
        printf("\t%d",a[i]);
    }
}
