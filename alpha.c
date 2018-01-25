#include<stdio.h>
void main()
{
char c;
printf("Enter the character");
scanf("%c",&c);
if(('a'<=c && 'z'>=c )|| ('A'<=c && 'Z'>=c))
{
printf("\nAlphabet");
}
else
{
printf("\n No");
}
}
