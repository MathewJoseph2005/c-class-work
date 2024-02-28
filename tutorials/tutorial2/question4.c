// display your name,address,city and phone using a C program.
#include <stdio.h>

int main() {
    char name[50];
    char address[100];
    char city[50];
    char phone[15];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your address: ");
    scanf("%s", address);

    printf("Enter your city: ");
    scanf("%s", city);

    printf("Enter your phone number: ");
    scanf("%s", phone);

    printf("\nYour details:\n");
    printf("Name: %s\n", name);
    printf("Address: %s\n", address);
    printf("City: %s\n", city);
    printf("Phone: %s\n", phone);

    return 0;
}
