//write a C program to read an integer number from keyboard and find the square of the number
#include <stdio.h>

int main(){
    int num,square;
    printf("Enter the number:");
    scanf("%d",&num);
    square = num*num;
    printf("the square of the number is :%d\n",square);
}