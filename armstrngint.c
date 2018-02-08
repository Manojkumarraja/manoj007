#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,n,temp1,temp2,rem,num,i;
    printf("Enter the two intervals");
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        temp1=i;
        temp2=i;
        n=0;
        num=0;
        while(temp1!=0)
        {
            ++n;
            temp1/=10;
            
        }
        while(temp2!=0)
        {
            rem=temp2%10;
            num=num+pow(rem,n);
            temp2/=10;
        }
    if(num==i)
    {
        printf("\n%d",num);
    }
    
}
}
