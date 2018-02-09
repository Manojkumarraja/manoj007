#include<stdio.h>
void main()
{
    char n;
    printf("Enter the string");
    scanf("%s",&n);
    if((n>=65)&&(n<=97)||(n>=97)&&(n<=122))
    {
        printf("no");
    }
    else
    
    {
        printf("yes");
    }
}

