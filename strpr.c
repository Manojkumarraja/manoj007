#include<stdio.h>
void main()
{
    char a[10];
    int n,i;
    printf("Enter the number of times");
    scanf("%d",&n);
    printf("\nEnter the strings");
    scanf("%s",&a);
    for(i=0;i<n;i++)
    {
        printf("\n%s",a);
    }
}
