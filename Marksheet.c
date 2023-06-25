#include <stdio.h>

int main() {

    // Declare variables to store marks of different subjects
    int mathematics, english, physics, computer_science, chemistry, maximumMarks = 500;
    
    // Take input for marks of each subject
    printf("Enter the marks obtained in Mathematics:- ");
    scanf("%d", &mathematics);

    printf("Enter the marks obtained in English:- ");
    scanf("%d", &english);

    printf("Enter the marks obtained in Physics:- ");
    scanf("%d", &physics);

    printf("Enter the marks obtained in Computer Science:- ");
    scanf("%d", &computer_science);

    printf("Enter the marks obtained in Chemistry:- ");
    scanf("%d", &chemistry);

    // Calculate the aggregate marks and percentage
    int aggregateMarks = mathematics + physics + computer_science + chemistry + english;
    float totalPercentage = (float)aggregateMarks * 100 / maximumMarks; // Ensuring correct operator precedence by typecasting to float

    // Print the aggregate marks and percentage
    printf("Total marks obtained %d \n", aggregateMarks);
    printf("Total percentage:- %f", totalPercentage);
    return 0;   //function returns 0 to indicate successful execution.
}
