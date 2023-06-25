//Area of Circle

#include <stdio.h>  //Prerocessor statement for basic input output added
#include <math.h>   //Prerocessor statement for mathematics related operations added
#define PI 3.14159   //Defining PI as external constant value here 
int main()    // Main function execution starts here.
{
    float radius;  //Variable initialised for storing value of radius
    printf("Enter the value of radius:- ");   //Prompt message for entering the value of radius
    scanf("%f", &radius);  // Taking iput for the value of radius from the user
    float areaOfCircle = PI * pow(radius, 2);     //Calculating area and storing in float data type variable named areaOfCircle
    printf("Area of circle= %f", areaOfCircle);    // Printing area of circle
    return 0;  //Returning integer value after succesfull execution
    
}   //program ends here