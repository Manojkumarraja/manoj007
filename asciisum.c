#include<stdio.h>
void main()
{
    char a[10];
    int b[10],n,i,sum;
    printf("Enter the size of the string");
    scanf("%d",&n);
    printf("\n Enter the characters");
    scanf("%s",&a);
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum+=b[i];
    }
    printf("\nThe sum of the ascii values of given chatacter is %d",sum);
}
