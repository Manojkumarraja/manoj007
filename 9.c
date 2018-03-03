#include<stdio.h>
struct war
{
    int kabali[3],oppo[3];
}d;
void main()
{
    int n,i;
printf("Enter the counts");
for(i=0;i<3;i++)
{
    scanf("%d\t%d",&d.kabali[i],&d.oppo[i]);
}
for(i=0;i<3;i++)
{
    n=d.oppo[i]-d.kabali[i];
    printf("\n%d",n);
}
}
