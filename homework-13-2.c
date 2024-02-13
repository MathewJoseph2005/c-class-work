#include <stdio.h>
#include <stdlib.h>
int main(){
    // Write a program to enter the values of two variables from the keyboard and then interchange the values of the two variables.
    int number1,number2;
    printf("Enter the first number:");
    scanf("%d",&number1);
    printf("Enter the number2:");
    scanf("%d",&number2);
    int temp;
    temp = number1;
    number1 = number2;
    number2 = temp;
    printf("Number1 = %d, number2 = %d after swap\n",number1,number2);

}