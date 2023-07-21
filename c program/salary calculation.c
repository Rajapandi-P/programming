#include <stdio.h>

struct Employee {
    char name[50];
    float hoursWorked;
    float hourlyRate;
};

void acceptEmployeeDetails(struct Employee *emp) {
    printf("Enter employee name: ");
    scanf("%s", emp->name);
    printf("Enter hours worked: ");
    scanf("%f", &emp->hoursWorked);
    printf("Enter hourly rate: ");
    scanf("%f", &emp->hourlyRate);
}

float calculateTotalPayments(struct Employee employees[], int numEmployees) {
    float totalPayments = 0;
    for (int i = 0; i < numEmployees; i++) {
        totalPayments += employees[i].hoursWorked * employees[i].hourlyRate;
    }
    return totalPayments;
}

int main() {
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    // Dynamically allocate memory for employees
    struct Employee *employees = malloc(numEmployees * sizeof(struct Employee));
    if (employees == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    for (int i = 0; i < numEmployees; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        acceptEmployeeDetails(&employees[i]);
    }

    float totalPayments = calculateTotalPayments(employees, numEmployees);

    printf("\nTotal payments for %d workers: $%.2f\n", numEmployees, totalPayments);

    // Free dynamically allocated memory
    free(employees);

    return 0;
}
