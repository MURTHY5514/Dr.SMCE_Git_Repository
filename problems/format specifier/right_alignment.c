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

    // Printing the values using format specifiers with right alignment
    printf("%10d\n", age);
    printf("%10.2f\n", pi);  // Rounded to 2 decimal places
    printf("%10.4lf\n", distance); // Rounded to 4 decimal places
    printf("%10c\n",grade);
    printf("%10s\n",name);
    printf("%10u\n", population);
    printf("%10ld\n",largeNumber);
    printf("%10hd\n", smallNumber);
    return 0;
}
