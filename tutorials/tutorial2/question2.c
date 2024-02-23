// input 3 numbers (real or integer) and find the average of the three numbers with precision of format as 8.3

#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    double average = (num1 + num2 + num3) / 3.0;

    printf("The average of %d, %d, and %d is %.3lf\n", num1, num2, num3, average);
    return 0;
}
