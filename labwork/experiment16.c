#include <stdio.h>
#define C_SIZE 50
union Address{
    char Name[C_SIZE];
    char House_name[C_SIZE];
    char City_name[C_SIZE];
    char State[C_SIZE];
    char pin_code[C_SIZE];
};
int main(){
    union Address names;
    printf("Enter the name:");
    scanf(" %[^\n]",names.Name);
    printf("Enter the House name:");
    scanf(" %[^\n]",names.House_name);
    printf("Enter the City name:");
    scanf(" %[^\n]",names.City_name);
    printf("Enter the State name:");
    scanf(" %[^\n]",names.State);
    printf("Enter the Pin code name:");
    scanf(" %[^\n]",names.pin_code);
    printf("The address of the person is");
    printf("\n%s\n%s\n%s\n%s\n%s\n",names.Name,names.House_name,names.City_name,names.State,names.pin_code);

    return 0;
}