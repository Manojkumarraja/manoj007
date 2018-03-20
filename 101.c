#include<stdio.h>
void main()
{
    char a[10];
    int n,i,n1=0;
    printf("Enter a string");
    scanf("%s",a);
    printf("\nEnter a number");
    scanf("%d",&n);
    printf("\n");
    for(i=0;a[i]!='\0';i++)
    {
        n1++;
    }
    for(i=n1-n;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
}
