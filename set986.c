#include<stdio.h>
void main()
{
    char a[10];
    int i,sum=0;
    printf("Enter a string");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[i+1])
        {
            sum=1;
        }
    }
    if(sum==1)
    {
        printf("\nNO");
    }
    else
    {
        printf("\nYES");
    }
}
