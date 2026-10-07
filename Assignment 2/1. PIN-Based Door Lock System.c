#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> // For sleep(). If on Windows, use #include <windows.h>

#define CORRECT_PIN "1234"

int main() {
    char input_pin[50];
    int attempts = 3;
    int authenticated = 0;
    int pin_len;

    printf("--- Security Lock System ---\n");

    while (attempts > 0 && !authenticated) {
        printf("Enter your PIN: ");
        scanf("%s", input_pin);

        pin_len = strlen(input_pin);

        // If-else statements providing feedback based on PIN length
        if (pin_len < 4) {
            printf("Feedback: PIN is too short.\n");
        } else if (pin_len > 6) {
            printf("Feedback: PIN is too long.\n");
        } else {
            printf("Feedback: PIN is exactly four digits.\n");
        }

        // Check if PIN matches
        if (strcmp(input_pin, CORRECT_PIN) == 0) {
            authenticated = 1;
            printf("\nAccess Granted!\n");
        } else {
            attempts--;
            if (attempts > 0) {
                printf("Incorrect PIN. Remaining attempts: %d\n\n", attempts);
            }
        }
    }

    // Menu Action System or Lockout System
    if (authenticated) {
        int choice = 0;

        while (choice != 4) {
            printf("\n--- Action Menu ---\n");
            printf("1. Open Door\n");
            printf("2. Change Username\n");
            printf("3. Change PIN\n");
            printf("4. Exit\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Access granted. Door unlocked.\n");
            } else if (choice == 2) {
                printf("Feature coming soon.\n");
            } else if (choice == 3) {
                printf("Feature coming soon.\n");
            } else if (choice == 4) {
                printf("Exiting system.\n");
            } else {
                printf("Invalid option.\n");
            }
        }
    } else {
        printf("\nSystem locked. Please wait 5 seconds...\n");

        for (int i = 5; i > 0; i--) {
            printf("%d... ", i);
            fflush(stdout);
            sleep(1); // If on Windows, change to: Sleep(1000);
        }

        printf("\nYou can try again.\n");
    }

    return 0;
}
