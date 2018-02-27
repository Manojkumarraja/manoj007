#include<stdio.h>
void main()
{
    char a[10],b[10];
    int i,j,n,n1;
    printf("Enter a string");
    scanf("%s",&a);
    n=0;
    n1=0;
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    j=n-1;
    for(i=0;a[i]!='\0';i++)
    {
        b[j]=a[i];
        j--;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            n1++;
        }
    }
    if(n1==n)
    {
        printf("\nYES");
    }
    else
    {
        printf("\nNO");
    }
}
