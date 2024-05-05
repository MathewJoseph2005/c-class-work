#include <stdio.h>
void sum(int *num1,int *num2){
    printf("the sum  = %d\n",*num1 + *num2);
}
void swap(int *num1,int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main(){
    int num1 , num2,choice;
    int y = 1;
    while (y == 1 )
    {
        scanf("%d %d",&num1,&num2);
        printf("Enter your choice:\n");
        printf("1.SUM\n");
        printf("2.SWAP\n");
        printf("3.exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            sum(&num1,&num2);
            break;
        
        case 2:
            swap(&num1,&num2);
            printf("number1 = %d,number 2 = %d\n",num1,num2);
        
        case 3:
        break;
        default:
        printf("Enter a valid number");
            break;
        }
        printf("do you wish to continue (1/0)");
        scanf("%d",&y);
    }
    return 1;
}