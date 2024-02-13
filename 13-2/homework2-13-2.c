#include <stdio.h>
// if the marks of Robert in three subjects are 78,45 and 62 respectively (each out of 100 ), write a program to calculate his total marks and percentage marks.
int main(){
    int subject1,subject2,subject3;
    subject1 = 78;
    subject2 = 45;
    subject3 = 62;
    double total_marks = subject1 + subject2 + subject3;
    double per_marks = (total_marks/300)*100;
    printf("total marks = %0.0lf,percentage marks = %3.0lf\n",total_marks,per_marks);
}