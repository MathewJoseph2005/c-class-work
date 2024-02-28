#include <stdio.h>
int get_value(char *str){
    int num;
    printf("Enter value of %s:",str);
    scanf("%d",&num);
    return num;
}
int main(){
    int principal,time,rate;
    principal = get_value("principal");
    time = get_value("time in min");
    rate = get_value("rate");
    double simpleIntrest = (principal*time*rate)/100;
    printf("Simple intrest = %0.2lf\n",simpleIntrest);
    return 0;
}