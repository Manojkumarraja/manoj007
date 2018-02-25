#include<stdio.h>
void main()
{
    char a[10],b[10];
    int c[100],d[100],i;
    printf("Enter a string 1");
    scanf("%s",&a);
    printf("\nEnter a string 2");
    scanf("%s",&b);
    for(i=0;a[i]!='\0';i++)
    {
        c[i]=a[i];
        d[i]=b[i];
    }
    if(c>d)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",b);
    }
}

