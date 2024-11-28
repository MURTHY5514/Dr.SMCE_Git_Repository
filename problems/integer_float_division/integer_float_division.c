#include <stdio.h>

int main() {
    // Integer division
    int a = 7, b = 2;
    int intResult = a / b;

    // Floating-point division
    float x = 7.0f, y = 2.0f;
    float floatResult = x / y;

    // Mixed division (casting integer to float)
    float mixedResult = (float)a / b;

    // Printing the results
    printf("Integer division (7 / 2): %d\n", intResult);
    printf("Floating-point division (7.0 / 2.0): %.2f\n", floatResult);
    printf("Mixed division ((float)7 / 2): %.2f\n", mixedResult);

    return 0;
}
