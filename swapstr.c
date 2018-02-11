#include<stdio.h>
void main()
{
    char a[10],c;
    int n,i,j;
    printf("Enter the size of string");
    scanf("%d",&n);
    printf("\nEnter the string");
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=i+1;j++)
        {
            c=a[i];
            a[i]=a[j];
            a[j]=c;
            i++;
        }
    }
    printf("\nSwapping of the odd and even character is");
    for(i=0;i<n;i++)
    {
        printf("\n%c",a[i]);
    }
}
