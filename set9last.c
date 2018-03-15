#include<stdio.h>
void main()
{
    char a[10],b;
    int i,j;
    printf("Enter a string");
    scanf("%s",&a);
    b=a[0];
    for(i=0;a[i]!='\0';i++)
    {
    for(j=i+1;a[j]!='\0';j++)
    {
        if(a[i]>=a[j])
        {
        b=a[i];
        a[i]=a[j];
        a[j]=b;
        }
    }
    }
    printf("\n");
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
}
