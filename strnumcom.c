#include<stdio.h>
void main()
{
    char a[10];
    int i,n,count1,count2;
    printf("Enter the string size");
    scanf("%d",&n);
    printf("\nEnter the string");
    scanf("%s",&a);
    count1=0;
    count2=0;
    for(i=0;i<n;i++)
    {
        if(((a[i]>=65)&&(a[i]<=91))||((a[i]>=97)&&(a[i]<=113)))
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count2!=0&&count1!=0)
    {
        printf("\nyes");
    }
    else
    {
        printf("\nNo");
    }
}
