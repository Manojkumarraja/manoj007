#include<stdio.h>
void main()
{
    char a[10];
    int n,i;
    printf("Enter a string");
    scanf("%[^\n]",&a);
    n=1;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            n++;
        }
    }
    printf("\n%d",n);
}
 
