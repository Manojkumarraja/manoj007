#include<stdio.h>
void main()
{
    char str[20];
    int i,count=0,count1=0,n;
    printf("Eter a string");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if(((str[i]>=65)&&(str[i]<=91))||((str[i]>=97)&&(str[i]<=123))||str[i]=='.')
        {
            count++;
        }
        count1++;
    }
    n=count1-count;
    
    printf("\nNumber of special character is %d",n);
    
}
