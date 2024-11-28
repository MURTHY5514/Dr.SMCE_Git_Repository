#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Display project instructions
    printf("Welcome to the Grade Calculator System!\n");
    printf("-------------------------------------------------\n");
    // Input marks
    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    // Calculate grade using else-if
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output the grade
    printf("\n-------------------------------------------------\n");
    printf("Your Marks: %d\n", marks);
    printf("Your Grade: %c\n", grade);
    printf("-------------------------------------------------\n");
    printf("Thank you for using the Grade Calculator System!\n");

    return 0;
}
