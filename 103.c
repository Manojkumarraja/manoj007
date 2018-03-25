#include<stdio.h>
void main()
{
    char a[20]="i love c++";
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            a[i]-=32;
        }
    }
    printf("%s",a);
}
