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

        // Map marks to specific integer division keys (e.g., 75 / 10 = 7)
        int score_key = students[i].marks / 10;

        switch (score_key) {
            case 10: // Treats 100 marks exactly like the 70-99 range
            case 9:
            case 8:
            case 7:
                students[i].grade = 'A';
                sprintf(students[i].status, "PASSED");
                break;
            case 6:
                students[i].grade = 'B';
                sprintf(students[i].status, "PASSED");
                break;
            case 5:
                students[i].grade = 'C';
                sprintf(students[i].status, "PASSED");
                break;
            case 4:
                students[i].grade = 'D';
                sprintf(students[i].status, "PASSED");
                break;
            default: // Catches 0 to 39 (keys 3, 2, 1, 0)
                students[i].grade = 'F';
                sprintf(students[i].status, "FAILED");
                break;
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
