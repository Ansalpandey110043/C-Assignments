#include <stdio.h>  //include standard input and output header file
#include <math.h>   //Prerocessor statement for mathematics related operations added
#define PI 3.14159  // define a constant value for pi
int main() {

    float radius, height, volume;   //Variable initialised for storing height, volume and radius
    printf("Enter the value of radius:- "); // prompt the user to enter the value of radius
    scanf("%f", &radius);   //Taking input of radius
    printf("Enter the value of height:- "); // prompt the user to enter the value of height
    scanf("%f", &height);   //taking input of height
    /* calculate the volume of the cylinder using the given formula 
    The math.h library is used to include the pow() function for calculating powers.*/
    volume = PI * pow(radius, 2) * height;
    printf("Volume of cylinder is:- %f", volume);   // display the calculated volume of the cylinder
    return 0;   // Return 0 to signify successful execution of program
}   //Program ends here