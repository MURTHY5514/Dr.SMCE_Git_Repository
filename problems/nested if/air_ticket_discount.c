#include <stdio.h>

int main() {
    int age;
    char gender;
    float fare, discount = 0, finalFare;

    // Print rules and guidelines
    printf("Welcome to the Air Ticket Discount System!\n");
    printf("Discount Rules:\n");
    printf("1. Passengers below 18 years of age and female (F):\n");
    printf("   - Receive a 30%% discount as a standard benefit for females.\n");
    printf("   - An additional 10%% discount is provided as a special offer.\n");
    printf("2. Passengers below 18 years of age and male (M):\n");
    printf("   - Receive a 20%% discount as a standard benefit for males.\n");
    printf("   - An additional 10%% discount is provided as a special offer.\n");
    printf("3. Passengers 18 years of age or older:\n");
    printf("   - Receive a 20%% discount as a benefit for adults.\n");
    printf("-------------------------------------------------\n");

    // Input details
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your gender (M for Male, F for Female): ");
    scanf(" %c", &gender); // Space before %c to consume leftover newline
    printf("Enter the ticket fare: ");
    scanf("%f", &fare);

    // Calculate discount
    if (age < 18) {
        if (gender == 'F' || gender == 'f') {
            discount = fare * (0.30 + 0.10); // 30% + 10%
        }
        if (gender == 'M' || gender == 'm') {
            discount = fare * (0.20 + 0.10); // 20% + 10%
        }
    }
    if (age >= 18) {
        discount = fare * 0.20; // 20% for adults
    }

    // Calculate final fare
    finalFare = fare - discount;

    // Output the results
    printf("-------------------------------------------------\n");
    printf("Original Ticket Fare: %.2f\n", fare);
    printf("Discount Applied: %.2f\n", discount);
    printf("Final Ticket Fare After Discount: %.2f\n", finalFare);
    printf("Thank you for using our discount system!\n");

    return 0;
}
