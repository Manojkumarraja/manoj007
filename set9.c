#include<stdio.h>
void main()
{
    char a[10],b[5],c[5];
    int i,e=0,e1=0;
    printf("Enter a string");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2!=0)
        {
            b[e]=a[i];
            e++;
        }
        else
        {
            c[e1]=a[i];
            e1++;
        }
        
    }
    printf("\nThe two strings are :%s\n%s",b,c);
}
