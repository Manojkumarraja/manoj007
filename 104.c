#include<stdio.h>
int main()
{
    int i,n,k,pro;
    //printf("Enter the number and its power");
    scanf("%d%d",&n,&k);
    pro=1;
    for(i=0;i<k;i++)
    {
        pro*=n;
    }
    printf("%d",pro);
    return 0;
}
