#include<stdio.h>
void main()
{
     int a,i,i1;
     printf("Enter a number");
     scanf("%d",&a);
     i1=2;
     for(i=1;i<=a;i++)
     {
        if(i1==a)
           {
               printf("\nYES");
               break;
           }
                i1*=2;
       }
          if(i1!=a)
             {
                  printf("\nNO");
             }
        getch();
 }
