#include<stdio.h>
void main()
{
    char a[10];
    int i,n,n1;
    printf("Enter a string number");
    scanf("%s",&a);
    n=0;
    n1=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='1'||a[i]=='0')
        {
            n++;
        }
        n1++;
    }
    if(n==n1)
    {
        printf("\nYES");
    }
    else
    {
        printf("\nNO");
    }
}
