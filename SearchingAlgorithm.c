#include <stdio.h>

int main() {
    // Declare and initialize an integer array named "roll" with 5 elements
    int roll[5] = {101, 102, 103, 104, 105};
    
    // Declare variables to store the roll number to search and a flag for whether it is found
    int search_roll, found = 0;
    
    // Prompt the user to enter a roll number to search
    printf("Enter roll number to search: ");
    
    // Read the roll number to search from the user and store it in the "search_roll" variable
    scanf("%d", &search_roll);
    
    // Start a for loop to iterate through each element of the array
    for(int i=0; i<5; i++) {
        // Check if the current element of the array matches the search roll number
        if(roll[i] == search_roll) {
            // If a match is found, set the "found" flag to 1 and break out of the loop
            found = 1;
            break;
        }
    }
    
    // Check the value of the "found" flag and print the appropriate message
    if(found == 1)
        printf("Roll number %d found in the class", search_roll);
    else
        printf("Roll number %d not found in the class", search_roll);
    
    // Return 0 to indicate successful execution of the program
    return 0;
}
