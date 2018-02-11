#include<stdio.h>
void main()
{
    char a[10],b[10];
    int i,n1,n2,count;
    printf("Enter the size of string 1");
    scanf("%d",&n1);
    printf("\nEnter the size of string 2");
    scanf("%d",&n2);
    printf("\nEnter the string 1");
    scanf("%s",&a);
    printf("\nEnter the string 2");
    scanf("%s",&b);
    count=0;
    for(i=0;i<n1;i++)
    {
        if(a[i]==b[i])
        {
            count++;
        }
    }
    if(count==n2)
    {
        printf("\nyes");
    }
    else
    {
        printf("\nno");
    }
}
