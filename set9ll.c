#include<stdio.h>
void main()
{
    char a[10];
    int i,b[5],e;
    printf("Enter a string");
    scanf("%s",&a);
    e=0;
    for (i=0;a[i]!='\0';i++)
    {
        if(((a[i]>=65)&&(a[i]<=91))||((a[i]>=97)&&(a[i]<=123)))
        {
        }
        else
        {
            b[e]=a[i];
            e++;
        }
    }
    printf("\n");
    for(i=0;b[i]!='\0';i++)
    {
        printf("%c",b[i]);
    }
}
