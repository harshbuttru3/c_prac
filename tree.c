#include <stdio.h>

int main() {
    int rows, i, j;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the hill pattern
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
