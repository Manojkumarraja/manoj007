#include<stdio.h>
int main()
{
    int i,num=0;
    char a[10],b[10];
    printf("Enter the two string");
    scanf("%s%s",a,b);
for(i=0;((a[i]!='\0')||(b[i]!='\0'));i++)
{
    if(a[i]!=b[i])
    {
        num++;
    }
}
printf("%d",num);
return 0;
}
