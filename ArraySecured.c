#include <stdio.h>

int main() {
    // Declare and initialize an integer array named "secured" with 5 elements
    int secured[5] = {85, 90, 92, 78, 95};
    
    // Declare and initialize a variable named "max_score" with the first element of the array
    int max_score = secured[0];
    
    // Start a for loop from index 1 to 4 (total of 5 elements in the array)
    for(int i=1; i<5; i++) {
        // Check if the current element is greater than the current max_score
        if(secured[i] > max_score) {
            // If the current element is greater, update the max_score to the current element
            max_score = secured[i];
        }
    }
    
    // Print the maximum score found in the array
    printf("Maximum score in the list is: %d", max_score);
    
    // Return 0 to indicate successful execution of the program
    return 0;
}
