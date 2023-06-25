#include <stdio.h>

int main() {
    // Declare an integer variable named "day" to store the input weekday number
    int day;

    // Prompt the user to enter a weekday number (1-7)
    printf("Enter weekday number (1-7):- ");
    
    // Read the input weekday number from the user and store it in the "day" variable
    scanf("%d", &day);

    // Start a switch statement based on the value of the "day" variable
    switch(day) {
        case 1:
            // If the value of "day" is 1, print "Monday" and break out of the switch statement
            printf("Monday\n");
            break;
        case 2:
            // If the value of "day" is 2, print "Tuesday" and break out of the switch statement
            printf("Tuesday\n");
            break;
        case 3:
            // If the value of "day" is 3, print "Wednesday" and break out of the switch statement
            printf("Wednesday\n");
            break;
        case 4:
            // If the value of "day" is 4, print "Thursday" and break out of the switch statement
            printf("Thursday\n");
            break;
        case 5:
            // If the value of "day" is 5, print "Friday" and break out of the switch statement
            printf("Friday\n");
            break;
        case 6:
            // If the value of "day" is 6, print "Saturday" and break out of the switch statement
            printf("Saturday\n");
            break;
        case 7:
            // If the value of "day" is 7, print "Sunday" and break out of the switch statement
            printf("Sunday\n");
            break;
        default:
            // If none of the above cases match, print "Invalid input!"
            printf("Invalid input!\n");
    }

    // Return 0 to indicate successful execution of the program
    return 0;
}
