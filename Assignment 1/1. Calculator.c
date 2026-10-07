#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    int num1, num2, result;

    printf("Hi! Welcome to the Calculator\n\n");

    printf("\nPlease choose an operator (+ - * / %%):");
    scanf("%c", &operator);

    printf("Kindly enter your first number: ");
    scanf("%d", &num1);

    printf("Kindly enter your second number: ");
    scanf("%d", &num2);

    switch(operator){
        case '+':
        result = num1 + num2;
        printf("\nYour result is: %.4d", result);
        break;
        case '-':
        result = num1 - num2;
        printf("\nYour result is: %.4d", result);
        break;
        case '*':
        result = num1 * num2;
        printf("\nYour result is: %.4d", result);
        break;
        case '/':
        result = num1 / num2;
        printf("\nYour result is: %.4d", result);
        break;
        case '%':
        result = num1 % num2;
        printf("\nYour result is: %.4d", result);
        break;

    default:
        printf("%c is not a valid operator", operator);

    }


    return 0;
}
