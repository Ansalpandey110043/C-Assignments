#include <stdio.h>

int main() {
    // Declare and initialize an integer array named "arr" with 5 elements
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Print a message to indicate the start of array element printing
    printf("Array elements: ");
    
    // Start a for loop to iterate through each element of the array
    for(int i=0; i<5; i++) {
        // Print the value at the current index of the array
        printf("%d ", arr[i]);
    }
    
    // Return 0 to indicate successful execution of the program
    return 0;
}
