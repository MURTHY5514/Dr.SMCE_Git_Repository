#include <stdio.h>

int main() {
    // Declare variables for each datatype
    int integerInput;
    float floatInput;
    double doubleInput;
    char charInput;
    char stringInput[100]; // Array to hold the string

    // Prompt and read an integer
    printf("Enter an integer: ");
    scanf("%d", &integerInput);

    // Prompt and read a float
    printf("Enter a float: ");
    scanf("%f", &floatInput);

    // Prompt and read a double
    printf("Enter a double: ");
    scanf("%lf", &doubleInput);

    // To avoid issues with leftover newline characters in the input buffer
    getchar(); // Consume the leftover newline character from previous input

    // Prompt and read a character
    printf("Enter a character: ");
    scanf("%c", &charInput);

    // Consume the leftover newline again for string input
    getchar();

    // Prompt and read a string
    printf("Enter a string (up to 99 characters): ");
    fgets(stringInput, sizeof(stringInput), stdin);

    // Output the values to demonstrate that input was successfully taken
    printf("\nYou entered:\n");
    printf("Integer: %d\n", integerInput);
    printf("Float: %.2f\n", floatInput);
    printf("Double: %.2lf\n", doubleInput);
    printf("Character: %c\n", charInput);
    printf("String: %s\n", stringInput);

    return 0;
}
