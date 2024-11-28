#include <stdio.h>

int main() {
    // Implicit Typecasting (Performed by the compiler automatically)
    int a = 10;
    float b = 3.5;
    float result = a + b; // 'a' is implicitly converted to float

    // Explicit Typecasting (Performed manually by the programmer)
    float x = 5.7;
    int y = (int)x; // 'x' is explicitly converted to int (fractional part is truncated)

    // Demonstrating integer to char typecasting
    int asciiValue = 65;
    char character = (char)asciiValue;

    // Demonstrating float to double typecasting
    float smallFloat = 2.3f;
    double largeDouble = (double)smallFloat;

    // Printing the results
    printf("Implicit Typecasting (int to float): %d + %.1f = %.1f\n", a, b, result);
    printf("Explicit Typecasting (float to int): %.1f -> %d\n", x, y);
    printf("Explicit Typecasting (int to char): %d -> '%c'\n", asciiValue, character);
    printf("Explicit Typecasting (float to double): %.1f -> %.1lf\n", smallFloat, largeDouble);

    return 0;
}
