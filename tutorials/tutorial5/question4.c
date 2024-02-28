/*Write a C program to read roll no, name, and marks of three subjects and calculate
the total, percentage*/
#include <stdio.h>

int get_values(char *str){
    int integer_value;
    printf("Enter your %s:",str);
    scanf("%d",&integer_value);
    return integer_value;
}
int main(){
    int roll_no,mark1,mark2,mark3;
    roll_no = get_values("Roll number");
    char name[100];
    printf("Enter your name: ");
    gets(name); 
    mark1 = get_values("mark 1");
    mark2 = get_values("mark 2");
    mark3 = get_values("mark 3");
    printf("%d %d %d\n",mark1,mark2,mark3);
    double percentage = ((mark1+mark2+mark3)*100)/300;
    printf("%lf",percentage);

    if(percentage>=75){
        printf("First Class with Distinction");
    }else if (percentage>=60 && percentage<75)
    {
        printf("First Class");
    }else if (percentage<60)
    {
        printf("Second Class");
    }
    
    
}