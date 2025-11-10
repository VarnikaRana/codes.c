//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    FILE *file;
    int n, i;
    char name[50];
    int roll;
    float marks;

    // Open file for writing
    file = fopen("students.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Write student records to file
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(file);

    // Open file for reading
    file = fopen("students.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("\nStudent Records:\n");
    printf("-------------------------------\n");
    printf("%-15s %-10s %-10s\n", "Name", "Roll No", "Marks");
    printf("-------------------------------\n");

    // Read and display each record
    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("%-15s %-10d %-10.2f\n", name, roll, marks);
    }

    fclose(file);
    return 0;
}
