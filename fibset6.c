#include<stdio.h>
void main()
{
    int a=1,b=1,c,n,i;
    printf("Enter the size");
    scanf("%d",&n);
    printf("\n%d\t%d",a,b);
    for(i=1;i<n-1;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
    
}
