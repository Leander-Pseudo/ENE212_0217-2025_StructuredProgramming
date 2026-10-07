#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    char reg_no[50];
    int marks;
    char grade;
    char status[10];
};

int main() {
    int n;

    printf("--- Student Grading System  ---\n");
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Data Entry Loop
    for (int i = 0; i < n; i++) {
        printf("\n--- Entering details for Student %d ---\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]s", students[i].name);

        printf("Enter Registration No: ");
        scanf("%s", students[i].reg_no);

        printf("Enter Marks (0-100): ");
        scanf("%d", &students[i].marks);

        // Grade calculation using if-else structures
        if (students[i].marks >= 70 && students[i].marks <= 100) {
                 students[i].grade = 'A';
        } else if (students[i].marks >= 60) {
            students[i].grade = 'B';
        } else if (students[i].marks >= 50) {
            students[i].grade = 'C';
        } else if (students[i].marks >= 40) {
            students[i].grade = 'D';
        } else {
            students[i].grade = 'F';
        }

        // Pass/Fail check based on the 40 mark passing boundary
        if (students[i].marks >= 40) {
            sprintf(students[i].status, "PASSED");
        } else {
            sprintf(students[i].status, "FAILED");
        }
    }

    // Orderly Display
    printf("\n========================================================================\n");
    printf("%-20s %-15s %-10s %-10s %-10s\n", "NAME", "REG NO", "MARKS", "GRADE", "STATUS");
    printf("========================================================================\n");
    for (int i = 0; i < n; i++) {
        printf("%-20s %-15s %-10d %-10c %-10s\n",
               students[i].name, students[i].reg_no, students[i].marks, students[i].grade, students[i].status);
    }
    printf("========================================================================\n");

    return 0;
}
