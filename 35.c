#include<stdio.h>
void main()
{
    char a[20];
    int i,count=0,count1=0,n;
    printf("Eter a string");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(((a[i]>=65)&&(a[i]<=91))||((a[i]>=97)&&(a[i]<=123))||a[i]=='.')
        {
            count++;
        }
        count1++;
    }
    n=count1-count;
    
    printf("\nNumber of integer is %d",n);
    
}
