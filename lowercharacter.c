#include <stdio.h>
#include <ctype.h>

int main() {
    char character;

    // Prompt user to enter a character
    printf("Enter a character: ");
    scanf("%c", &character);

    // Check if the entered character is lowercase
    if (islower(character)) {
        printf("The character '%c' is lowercase.\n", character);
    } else {
        printf("The character '%c' is not lowercase.\n", character);
    }

    return 0;
}
