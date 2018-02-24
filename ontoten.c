#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number within 1to2");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
            printf("\nONE");
            break;
        }
        case 2:
        {
            printf("\nTWO");
            break;
        }
        case 3:
        {
            printf("\nTHREE");
            break;
        }
        case 4:
        {
            printf("\nFOUR");
            break;
        }
        case 5:
        {
            printf("\nFIVE");
            break;
        }
        case 6:
        {
            printf("\nSIX");
            break;
        }
        case 7:
        {
            printf("\nSEVEN");
            break;
        }
        case 8:
        {
            printf("\nEIGHT");
            break;
        }
        case 9:
        {
            printf("\nNINE");
            break;
        }
        default:
        {
            printf("\nTEN");
        }
        
    }
}
