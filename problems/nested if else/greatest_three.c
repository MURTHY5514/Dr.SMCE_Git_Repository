#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Input three numbers
    printf("Enter three integers:\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);

    // Nested if-else to find the largest number
    if (num1 > num2) {
        if (num1 > num3) {
            largest = num1;
        } else {
            largest = num3;
        }
    } else {
        if (num2 > num3) {
            largest = num2;
        } else {
            largest = num3;
        }
    }

    // Output the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}
