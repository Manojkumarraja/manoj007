#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter the intervals");
    scanf("%d%d",&a,&b);
    while(a<b)
    {
        for(i=2;i<b/2;i++)
        {
            count=0;
            if(a%i==0)
            {
                count++;
            }
        }    
            if(count==1)
            {
                printf("\n%d",a);
            }
            a++;
    }
    return 0;
}
