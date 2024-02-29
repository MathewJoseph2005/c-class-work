// Write a C Program to find the Roots of the quadratic equation using if--else if ..else

#include <stdio.h>
#include <math.h>
int get_int_value(char *str){
    int num;
    printf("Enter the value of %s",str);
    scanf("%d",&num);
    return num;
}
int main(){
    int a,b,c;
    a = get_int_value("coefficent of x^2:");
    b = get_int_value("coefficent of x:");
    c = get_int_value("constant:");

    int des = (b*b) - 4*a*c;
    if(des>0){
        double root1 = (-b + sqrt(des)) / (2 * a);
        double root2 =  (-b - sqrt(des)) / (2 * a);
        printf("%lf is the first root and %lf is the second root",root1,root2);
    }else if(des=0){
        double root =  (-b - sqrt(des)) / (2 * a);
    }else{
        int  realPart = -b / (2 * a);
        int imagPart = sqrt(-des) / (2 * a);
        printf("root1 = %d+%di and root2 = %d-%di", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}