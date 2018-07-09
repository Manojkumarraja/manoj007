#include<stdio.h>
void main()
{
    int i,j,n,num=0,n1=0;
    char a[10],b[10],c[10],d[10],e[10];
    printf("Enter the number of string");
    scanf("%d",&n);
    switch(n)
    {
        case 2:
        {
            printf("\nEnter the two strings");
            scanf("%s%s",a,b);
            for(i=0;((a[i]!='\0')||(b[i]!='\0'));i++)
            {
                n1++;
            }
            for(i=0;i<n1;i++)
            {
                if(a[i]==b[i])
                {
                    num++;
                }
            }
            for(i=0;i<num;i++)
            {
                printf("%c",a[i]);
            }
            break;
        }
        case 3:
        {
            printf("\nEnter the three strings");
            scanf("%s%s%s",a,b,c);
            for(i=0;((a[i]!='\0')||(b[i]!='\0')||(c[i]!='\0'));i++)
            {
                n1++;
            }
            for(i=0;i<n1;i++)
            {
                if((a[i]==b[i])&&(b[i]==c[i]))
                {
                    num++;
                }
            }
            for(i=0;i<num;i++)
            {
                printf("%c",a[i]);
            }
            
            break;
        }
        case 4:
        {
            printf("\nEnter the four strings");
            scanf("%s%s%s%s",a,b,c,d);
            for(i=0;((a[i]!='\0')||(b[i]!='\0')||(c[i]!='\0')||(d[i]!='\0'));i++)
            {
                n1++;
            }
            for(i=0;i<n1;i++)
            {
                if((a[i]==b[i])&&(b[i]==c[i])&&(c[i]==d[i]))
                {
                    num++;
                }
            }
            for(i=0;i<num;i++)
            {
                printf("%c",a[i]);
            }
        }
        case 5:
            {
                printf("\nEnter the five string");
                scanf("%s%s%s%s%s",a,b,c,d,e);
                for(i=0;((a[i]!='\0')||(b[i]!='\0')||(c[i]!='\0')||(d[i]!='\0')||(e[i]!='\0'))
                    {
                        n1++;
                    }
                    for(i=0;i<n1;i++)
                    {
                        if((a[i]==b[i])&&(b[i]==c[i])&&(c[i]==d[i])&&(d[i]==e[i]))
                        {
                            num++;
                        }
                    }
                    for(i=0;i<num;i++)
                    {
                        printf("%c",a[i]);
                    }
                    }
                    }
    
}
