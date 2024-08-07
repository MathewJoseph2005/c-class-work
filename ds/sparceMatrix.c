#include <stdio.h>

int main(){
    int i,row,col,j,k,cont = 0;
    printf("enter the no of row of the matrix:");
    scanf("%d",&row);
    printf("enter the no of col of the matrix:");
    scanf("%d",&col);
    int array[row][col];
    printf("enter the elements of the array:");
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&array[i][j]);
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(array[i][j] != 0){
                cont++;
            }
        }
        
    }
    printf("The sparce matrix is:\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    int b[cont+1][3];
    k = 1;
    b[0][0] = row;
    b[0][1] = col;
    for (i = 0; i < row; i++)
    {
        for ( j = 0; i < col; i++)
        {
            if (array[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = array[i][j];
                k++;
            }
            
        }
    }
    b[0][2] = k-1;

    printf("row\tcol\tvalue\n");
    for ( i = 0; i < cont+1; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}