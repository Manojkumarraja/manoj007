#include<stdio.h>
void main()
{
    int l,b,h,a,v;
    printf("Ener the length breadth and height");
    scanf("%d%d%d",&l,&b,&h);
    a=0.5*(l*b+b*h+h*l);
    v=l*b*h;
    printf("\nThe area of the cuboid is: %d \n The volume of he cuboid is: %d",a,v);
}
