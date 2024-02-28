// . Write a C program to calculate Compound Interest.use pow function
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int get_value(char *str){
    int num;
    printf("Enter value of %s:",str);
    scanf("%d",&num);
    return num;
}
int main(){
    int principal,rate,compoundingPeriods,totalTime;
    principal = get_value("principal");
    rate = get_value("annual interest rate");
    compoundingPeriods = get_value(" compounding periods");
    totalTime = get_value(" total time in years");
    double base = principal*(1+rate/compoundingPeriods);
    double power = compoundingPeriods*totalTime;
    double amount = pow(base,power);
    printf("the amount =  %lf",amount);
    return 0;
}