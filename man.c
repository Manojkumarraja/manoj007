#include<stdio.h>
void main()
{
    char a[10];
    int n,i;
    printf("Enter a string");
    scanf("%s",a);
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
}
