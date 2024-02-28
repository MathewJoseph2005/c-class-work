/*Write a C program to read the age of a candidate and determine whether he/she is
eligible to cast his/her vote. (Use if-else)*/

#include <stdio.h>

int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18){
        printf("Congratulations! You are eligible to cast your vote");
    }else if (age<18){
        printf("You are not eligible to cast your vote");
    }
}