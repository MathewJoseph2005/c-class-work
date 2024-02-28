// Program checks whether a number given by the user is zero, positive, or negative
#include <stdio.h>
int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num == 0){
        printf("the number is zero");
    }else{
        if(num>0){
            printf("the number is positive");
        }else{
            printf("the number is negative");
        }
    }
}