#include<stdio.h>
void main()
{
    char a[10];
    int i,n;
    printf("Enter a string");
    scanf("%s",&a);
    n=0;
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    a[n/2]='*';
    printf("%s",a);
}
