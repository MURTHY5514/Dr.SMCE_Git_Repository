#include <stdio.h>

int main() {
    int age;
    float fare, discount = 0, finalFare;

    // Display project instructions
    printf("Welcome to the Air Ticket Discount System!\n");
    printf("-------------------------------------------------\n");
    printf("Instructions:\n");
    printf("1. Enter your age when prompted.\n");
    printf("2. Enter the ticket fare (in numbers, e.g., 1000.50).\n");
    printf("3. The system will calculate the discount based on your age:\n");
    printf("   - Below 14 years: 50% discount.\n");
    printf("   - Between 14 and 18 years: 30% discount.\n");
    printf("   - 50 years and above: 20% discount.\n");
    printf("   - All other cases: 10% discount.\n");
    printf("4. The final fare after discount will be displayed.\n");
    printf("-------------------------------------------------\n\n");

    // Input age and fare
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter the ticket fare: ");
    scanf("%f", &fare);

    // Calculate discount using else-if
    if (age < 14) {
        discount = fare * 0.50; // 50% discount
    } else if (age >= 14 && age < 18) {
        discount = fare * 0.30; // 30% discount
    } else if (age >= 50) {
        discount = fare * 0.20; // 20% discount
    } else {
        discount = fare * 0.10; // 10% discount
    }

    // Calculate final fare
    finalFare = fare - discount;

    // Output the results
    printf("\n-------------------------------------------------\n");
    printf("Original Ticket Fare: %.2f\n", fare);
    printf("Discount Applied: %.2f\n", discount);
    printf("Final Ticket Fare After Discount: %.2f\n", finalFare);
    printf("-------------------------------------------------\n");
    printf("Thank you for using the Air Ticket Discount System!\n");

    return 0;
}
