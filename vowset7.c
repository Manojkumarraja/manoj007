#include<stdio.h>
void main()
{
    char a[10];
    int i,num=0;
    printf("Enter a string");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            num++;
        }
    }
    if(num==0)
    {
        printf("\nNO");
    }
    else
    {
        printf("\nYES");
    }
}
