#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    printf("Enter a word");
    scanf("%s",&a);
    strrev(a);
    printf("\nReverse of given word is %s",a);
}


