#include <stdio.h>
#include <stdbool.h>

int main() {
    // Integer type
    int age = 25;
    printf("Integer (int): %d\n", age);

    // Floating-point type
    float pi = 3.14f;
    printf("Floating-point (float): %.2f\n", pi);

    // Double type
    double largeNumber = 12345.6789;
    printf("Double (double): %.4f\n", largeNumber);

    // Character type
    char grade = 'A';
    printf("Character (char): %c\n", grade);

    // String (array of characters)
    char name[] = "John";
    printf("String (char[]): %s\n", name);

    // Boolean (requires stdbool.h in C)
    bool isPassed = true;
    printf("Boolean (bool): %s\n", isPassed ? "true" : "false");

    // Unsigned integer
    unsigned int population = 1000000;
    printf("Unsigned Integer (unsigned int): %u\n", population);

    // Long integer
    long int distance = 987654321;
    printf("Long Integer (long int): %ld\n", distance);

    // Short integer
    short int smallNumber = 123;
    printf("Short Integer (short int): %d\n", smallNumber);

    // Example of constant
    const float gravity = 9.8f; //it will not allow to change the value of gravity
    // gravity=2.0f;
    printf("Constant Float (const float): %.1f\n", gravity);

    return 0;
}
