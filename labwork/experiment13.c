#include <stdio.h>

struct Employee {
  char name[50];
  int employeeID;
  float salary;
};

int main() {
  int n;
  printf("Enter the number of employees: ");
  scanf("%d", &n);

  struct Employee emp[n];

  // Read employee data
  for (int i = 0; i < n; ++i) {
    printf("\nEnter details for employee %d:\n", i + 1);
    printf("Name: ");
    scanf("%s", emp[i].name);
    printf("Employee ID: ");
    scanf("%d", &emp[i].employeeID);
    printf("Salary: ");
    scanf("%f", &emp[i].salary);
  }

  // Print employee data
  printf("\nEmployee Details:\n");
  for (int i = 0; i < n; ++i) {
    printf("Employee %d:\n", i + 1);
    printf("Name: %s\n", emp[i].name);
    printf("Employee ID: %d\n", emp[i].employeeID);
    printf("Salary: %.2f\n", emp[i].salary);
  }

  return 0;
}
