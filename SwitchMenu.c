#include <stdio.h>

int main() {
    // Declare variables for the choice, first number, and second number
    int choice, num1, num2;
    
    // Prompt the user to enter the first number
    printf("Enter first number: ");
    // Read the first number from the user and store it in the "num1" variable
    scanf("%d", &num1);
    
    // Prompt the user to enter the second number
    printf("Enter second number: ");
    // Read the second number from the user and store it in the "num2" variable
    scanf("%d", &num2);
    
    // Display the available operations
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulation\n");
    
    // Read the choice of operation from the user
    scanf("%d", &choice);
    
    // Use a switch statement to perform the chosen operation
    switch(choice) {
        case 1:
            // Addition
            printf("Result: %d", num1 + num2);
            break;
        case 2:
            // Subtraction
            printf("Result: %d", num1 - num2);
            break;
        case 3:
            // Multiplication
            printf("Result: %d", num1 * num2);
            break;
        case 4:
            // Division
            if (num2 == 0)
                printf("Cannot divide by zero");
            else
                printf("Result: %d", num1 / num2);
            break;
        case 5:
            // Modulation
            printf("Result: %d", num1 % num2);
            break;
        default:
            // Invalid choice
            printf("Invalid choice");
    }
    
    // Return 0 to indicate successful execution of the program
    return 0;
}
