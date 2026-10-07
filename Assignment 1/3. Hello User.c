#include <stdio.h>
#include <stdlib.h>

   int main() {
    char name[50]; // Stores up to 49 characters

    printf("Enter your name: ");
    // Reads the entire line including spaces
    scanf(" %[^\n]s", name);

    printf("Hello, %s!\n", name);

    return 0;
}
