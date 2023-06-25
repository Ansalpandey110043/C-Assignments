#include <stdio.h>

int main() {
    // Declare and initialize a 2D integer array named "matrix" with size 3x3
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    
    // Print a message to indicate the start of matrix contents printing
    printf("Matrix contents:\n");
    
    // Start a nested for loop to iterate through the rows and columns of the matrix
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            // Print the value at the current row and column of the matrix
            printf("%d ", matrix[i][j]);
        }
        // Print a new line after printing each row of the matrix
        printf("\n");
    }
    
    // Return 0 to indicate successful execution of the program
    return 0;
}
