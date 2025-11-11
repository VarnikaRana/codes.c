/*Write a C program to store information of multiple employees (name, employee ID, and salary) into a file using fprintf().
Then, read all employee records from the file using fscanf() and display them in a well-formatted table. */

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *file;
    struct Employee emp;
    int n, i;

    file = fopen("employees.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", emp.name);  
        printf("Employee ID: ");
        scanf("%d", &emp.id);
        printf("Salary: ");
        scanf("%f", &emp.salary);

        fprintf(file, "%s %d %.2f\n", emp.name, emp.id, emp.salary);
    }

    fclose(file);

    file = fopen("employees.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("\nEmployee Records:\n");
    printf("---------------------------------------\n");
    printf("%-15s %-10s %-10s\n", "Name", "ID", "Salary");
    printf("---------------------------------------\n");

    while (fscanf(file, "%s %d %f", emp.name, &emp.id, &emp.salary) == 3) {
        printf("%-15s %-10d %-10.2f\n", emp.name, emp.id, emp.salary);
    }

    fclose(file);
    return 0;
}
