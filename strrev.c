#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],b;
    printf("Enter a word");
    scanf("%s",&a);
    b= strrev(a);
    printf("\nReverse of given word is %s",b);
}


