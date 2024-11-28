#include <stdio.h>

int main() {
    // Example of various data types and their format specifiers
    
    int age = 25;                     // Integer
    float pi = 3.14159f;              // Floating-point number
    double distance = 12345.6789;     // Double-precision floating-point
    char grade = 'A';                 // Character
    char name[] = "Alice";            // String
    unsigned int population = 100000; // Unsigned integer
    long int largeNumber = 1234567890; // Long integer
    short int smallNumber = 32000;    // Short integer

    // Printing the values using format specifiers
    printf("Integer (%%d): %d\n", age);
    printf("Floating-point (%%f): %.2f\n", pi);  // Rounded to 2 decimal places
    printf("Double (%%lf): %.4lf\n", distance); // Rounded to 4 decimal places
    printf("Character (%%c): %c\n", grade);
    printf("String (%%s): %s\n", name);
    printf("Unsigned Integer (%%u): %u\n", population);
    printf("Long Integer (%%ld): %ld\n", largeNumber);
    printf("Short Integer (%%hd): %hd\n", smallNumber);

    return 0;
}
