/*Write a C Program to check whether a given number is less than 100.if so check
whether it is odd or even.Otherwise display the result as “it is a positive number
greater than 100”.(Use Nested if)*/
#include <stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num<100)
    {
        if(num%2 == 0){
            printf("Even");
        }else{
            printf("Odd");
        }
    }else{
        printf("positive number greater than 100");
    }
    
}