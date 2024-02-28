/*Enter integer variables a, b, c, d, and e. evaluate the following expressions:
I. a + b – c + d
II. a * b/c+d
III. 1 + a * b % c
IV. a+d %b-c
Print the results*/

#include <stdio.h>

int get_int_value(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    return num;
}

int main(){
    int a, b, c, d,e;
    a = get_int_value();
    b = get_int_value();
    c = get_int_value();
    d = get_int_value();
    e = get_int_value();
    printf("Answer of the expression a + b - c + d = %d\n",(a + b - c + d));
    printf("Answer of the expression a * b/c+d = %d\n",(a * b/c+d));
    printf("Answer of the expression 1 + a * b %%c= %d\n",(a * b/c+d));
    printf("Answer of the expression a+d %%b-c= %d\n",(a+d %b-c));
    return 0;
}
