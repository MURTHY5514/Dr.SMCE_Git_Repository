#include <stdio.h>

int main() {
    char ch1 = 'A'; // Character 'A'
    char ch2 = 'z'; // Character 'z'

    // Display ASCII values of the characters
    printf("The ASCII value of '%c' is: %d\n", ch1, ch1);
    printf("The ASCII value of '%c' is: %d\n", ch2, ch2);

    // Display characters for given ASCII values
    int ascii1 = 65;  // ASCII value of 'A'
    int ascii2 = 122; // ASCII value of 'z'
    printf("The character for ASCII value %d is: '%c'\n", ascii1, ascii1);
    printf("The character for ASCII value %d is: '%c'\n", ascii2, ascii2);

    // Demonstrate character arithmetic using ASCII values
    printf("The next character after '%c' is '%c'\n", ch1, ch1 + 1);
    printf("The previous character before '%c' is '%c'\n", ch2, ch2 - 1);

    return 0;
}
