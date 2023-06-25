#include <stdio.h>  //This is a preprocessor directive that includes the standard input/output library to the program.
#define ONE_KILOMETER_IN_FEET 3280.84 //These are constant values that are used to convert the distance between cities from kilometers to feet.
#define ONE_KILOMETER_IN_METRE 1000 //These are constant values that are used to convert the distance between cities from kilometers to meters.
#define ONE_KILOMETER_IN_INCHES 39370.08 //These are constant values that are used to convert the distance between cities from kilometers to inches.
#define ONE_KILOMETER_IN_CENTIMETERS 100000//These are constant values that are used to convert the distance between cities from kilometers to centimeters.
int main() {    //This is the main function where the program execution begins.

    float DBC;  //This declares a float variable named DBC to store the distance between cities in kilometers.
    
    printf("Enter the distance between cities in (km):- "); //This prompts the user to enter the distance between cities in kilometers.
    scanf("%f", &DBC);  //This statement reads the user input from the standard input stream (stdin) using the scanf function

    float distance_In_Feet_City = DBC * ONE_KILOMETER_IN_FEET;
    /* This calculates the distance between cities in feet using the constant ONE_KILOMETER_IN_FEET and the user input DBC. 
    The result is stored in the variable distance_In_Feet_City and is printed to the standard output stream (stdout) using the printf function. */
    printf("Distance in Feets of cities:- %f(feet) \n", distance_In_Feet_City);

    /* This calculates the distance between cities in meters using the constant ONE_KILOMETER_IN_METRE and the user input DBC. 
    The result is stored in the variable distance_In_Metre_City and is printed to the standard output stream (stdout) using the printf function. */
    float distance_In_Metre_City = DBC * ONE_KILOMETER_IN_METRE;
    printf("Distance in Metres of cities:- %f(m) \n", distance_In_Metre_City);    
    
    /* This calculates the distance between cities in inches using the constant ONE_KILOMETER_IN_INCHES and the user input DBC. 
    The result is stored in the variable distance_In_Inches_City and is printed to the standard output stream (stdout) using the printf function. */
    float distance_In_Inches_City = DBC * ONE_KILOMETER_IN_INCHES;
    printf("Distance in Inches of cities:- %f(inches) \n", distance_In_Inches_City);    
    

    /* This calculates the distance between cities in centimeters using the constant ONE_KILOMETER_IN_CENTIMETERS and the user input DBC. 
    The result is stored in the variable distance_In_Centimeters_City and is printed to the standard output stream (stdout) using the printf function. */
    float distance_In_Centimeters_City = DBC * ONE_KILOMETER_IN_CENTIMETERS;
    printf("Distance in Centimetres of cities:- %f(cm) \n", distance_In_Centimeters_City);    
    
    return 0;   //This statement indicates that the program has executed successfully and returns 0 to the operating system.
}