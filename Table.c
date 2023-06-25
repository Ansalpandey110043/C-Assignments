#include <stdio.h>

int main() {
    // Declare variables for loop counters
    int i, j;

    // Outer loop to iterate from 1 to 10
    for(i = 1; i <= 10; i++) {
        // Inner loop to iterate from 1 to 10
        for(j = 1; j <= 10; j++) {
            // Print the product of i and j with 4 digits of spacing
            printf("%4d", i * j);
        }
        // Print a new line after printing each row
        printf("\n");
    }
    // Return 0 to indicate successful execution of the program
    return 0;
}
