#include <stdio.h>
#include <stdlib.h>

struct polynomial
{
    int expo;
    int coeff;
}x[15];

int main()
{
    int firstCount;
    printf("enter the number of terms:");
    scanf("%d",&firstCount);

    for (int i = 0; i < firstCount; i++)
    {
        printf("enter the exponet of the %dth term",i+1);
        scanf("%d",&x[i].expo);
        printf("enter the co-effient of the %dth term",i+1);
        scanf("%d",&x[i].coeff);
    }
    printf("the polynomial is\n");
    for (int i = 0; i < firstCount; i++)
    {
        if (i == firstCount-1)
        {
             printf("%dx^%d ",x[i].coeff,x[i].expo);
             break;
        }
        
        printf("%dx^%d + ",x[i].coeff,x[i].expo);

    }
    printf("\n");
    
    return 0;
}
