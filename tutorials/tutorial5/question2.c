/*
If the ages of Ram, Shyam, and Ajay are input through the keyboard, write a
program to determine the youngest of the three. (Use if-else if…else)
*/
#include <stdio.h>
int get_number(char *st){
    int num;
    printf("Enter the age of %s:",st);
    scanf("%d",&num);
    return num;
}
int main(){
    int ram,shyam,ajay;
    ram = get_number("Ram");
    shyam = get_number("Shyam");
    ajay = get_number("Ajay");

    if(ram<shyam){
        if(ram<ajay){
            printf("Ram is the smallest");
        }
    }else if (shyam<ram)
    {
        if (shyam<ajay)
        {
            printf("Shyam is the smallest");
        }
        
    }else if (ajay<shyam)
    {
        if (ajay<ram)
        {
            printf("Ajay is the smallest");
        }
        
    }
    
    
}