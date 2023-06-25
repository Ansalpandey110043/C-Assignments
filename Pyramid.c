#include <stdio.h>

int main() {
    // Declare variables i, j, n, and k
    int i, j, n = 4, k;
    
    // Outer loop for the rows
    // Starts from n and goes down to 1
    for (i = n; i >= 1; i--) {
        
        // Inner loop to print spaces
        // Starts from i and goes down to 2
        for (j = i; j >= 2; j--) {
            printf(" "); // Print a space
        }
        
        // Inner loop to print asterisks
        // Number of asterisks depends on the row number
        // Starts from 1 and goes up to 2 * (n - i + 1) - 1
        for (k = 1; k <= 2 * (n - i + 1) - 1; k++) {
            printf("*"); // Print an asterisk
        }
        
        printf("\n"); // Print a new line after each row
    }
    
    return 0;
}
