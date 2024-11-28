#include <stdio.h>

int main() {
    char ch, converted;

    // Input the character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is lowercase
    if (ch >= 'a' && ch <= 'z') {
        converted = ch - 32; // Convert to uppercase
        printf("The uppercase of '%c' is '%c'\n", ch, converted);
    }
    // Check if the character is uppercase
    else if (ch >= 'A' && ch <= 'Z') {
        converted = ch + 32; // Convert to lowercase
        printf("The lowercase of '%c' is '%c'\n", ch, converted);
    }
    // If the character is neither uppercase nor lowercase
    else {
        printf("'%c' is not an alphabetic character.\n", ch);
    }

    return 0;
}
