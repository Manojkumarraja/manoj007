#include<stdio.h>
void main()
{
    char a[20];
    int i,num=0;
    printf("Enter a string");
    scanf("%[^\n]",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            num++;
        }
    }
    printf("\nString lenght is %d",num);

}
