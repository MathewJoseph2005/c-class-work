#include <stdio.h>

int main() {
    float basic_salary, hra, da, gross_salary;
    int choice;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    printf("Enter the choice for hra and da:\n");
    printf("1. Basic <= 10000\n");
    printf("2. 10000 < Basic <= 20000\n");
    printf("3. 20000 < Basic <= 30000\n");
    printf("4. Basic > 30000\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            hra = basic_salary * 0.1;
            da = basic_salary * 0.5;
            break;
        case 2:
            hra = basic_salary * 0.2;
            da = basic_salary * 0.6;
            break;
        case 3:
            hra = basic_salary * 0.25;
            da = basic_salary * 0.7;
            break;
        case 4:
            hra = basic_salary * 0.3;
            da = basic_salary * 0.8;
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    gross_salary = basic_salary + hra + da;

    printf("Gross salary of the employee = %.2f\n", gross_salary);

    return 0;
}
