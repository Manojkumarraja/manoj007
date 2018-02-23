#include<stdio.h>
void main()
{
    int a,b,c[10],i,count=0;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    printf("\nEnter %d numbers",a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<a;i++)
    {
        if(b==c[i])
        {
            count++;
        }
    }
    
    if(count!=0)
    {
    printf("\nYes");
        }
        else
        {
            printf("\nNo");
        }
    
}
