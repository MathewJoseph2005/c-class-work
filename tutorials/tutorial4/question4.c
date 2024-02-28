// Write a program to Find all the roots of a quadratic equation in C.check for all three conditions.
#include <stdio.h>

int get_value(char *str){
    int num;
    printf("Enter value of %s:",str);
    scanf("%d",&num);
    return num;
}
int main(){
    int a,b,c;
    a = get_value("coefficient of x^2");
    b = get_value("coefficient of x");
    c = get_value("constant");
    int des = (b*b)-4*a*c;
    if(des>0){
        printf("Two real and distinct roots");
    }else if (des == 0){
    
        printf("Two real and equal roots");
    }else if (des<0)
    {
        printf("Two complex roots");
    }
    
    return 0;
}