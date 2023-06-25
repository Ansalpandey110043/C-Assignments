#include <stdio.h>

int main() {
    // Declare and initialize an integer array named "arr" with 5 elements
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Print a message to indicate the start of original array element printing
    printf("Original array elements: ");
    
    // Start a for loop to iterate through each element of the array
    for(int i=0; i<5; i++) {
        // Print the value at the current index of the array
        printf("%d ", arr[i]);
    }
    
    // Print a new line to separate the output
    printf("\n");
    
    // Print a message to indicate the start of array element printing after multiplication
    printf("Array elements after multiplying with 2: ");
    
    // Start a for loop to iterate through each element of the array
    for(int i=0; i<5; i++) {
        // Multiply the value at the current index of the array by 2 and update the array element
        arr[i] = arr[i] * 2;
        
        // Print the updated value at the current index of the array
        printf("%d ", arr[i]);
    }
    
    // Return 0 to indicate successful execution of the program
    return 0;
}
