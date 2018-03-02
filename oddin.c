#include<stdio.h>
void main()
{
    int j,a,n,a1,rem,num[10];
    printf("ENter a number\n");
    scanf("%d",&a);
    a1=a;
    while(a!=0)
    {
        a/=10;
        n++;
    }
    j=n-1;
    while(a1!=0)
    {
        rem=a1%10;
        num[j]=rem;
        j--;
        a1/=10;
    }
    for(j=0;j<n;j++)
    {
        if(num[j]%2!=0)
        {
            printf("\t%d",num[j]);
        }
    }
}
