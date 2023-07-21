#include <stdio.h>


struct Employee {
    char name[50];
    int age;
    float salary;
};


void acceptEmployeeDetails(struct Employee *emp) {
    printf("Enter employee name: ");
    scanf("%s", emp->name);
    printf("Enter employee age: ");
    scanf("%d", &emp->age);
    printf("Enter employee salary: ");
    scanf("%f", &emp->salary);
}


void displayEmployeeDetails(struct Employee emp) {
    printf("Employee name: %s\n", emp.name);
    printf("Employee age: %d\n", emp.age);
    printf("Employee salary: %.2f\n", emp.salary);
}

int main() {
    struct Employee emp1;
    printf("Enter details for Employee 1:\n");
    acceptEmployeeDetails(&emp1);
    printf("\nEmployee details:\n");
    displayEmployeeDetails(emp1);

    return 0;
}
