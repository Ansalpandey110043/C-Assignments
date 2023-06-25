#include <stdio.h>     //Prerocessor statement for basic input output added

int main() {      // Main function execution starts here.

    int a  = 4;       //Initalising variable a and b for data storage
    int b = 2;

    int sum = a + b;   //Calculating sum of the variables
    int subtraction = a - b; //Calculating subtraction of the variables
    int product = a * b;  //Calculating product of the variables
    int devide = a / b;   //Calculating division of the variables
    int remainder = a % b;  //Calculating remainder of the variables

    printf("Sum is:- %d \n", sum); //Printing the sum of variables
    printf("Subtraction is:- %d \n", subtraction);  //Printing the subtraction of variables
    printf("Product is:- %d \n", product);  //Printing the product of variables
    printf("Devision is:- %d \n", devide);   //Printing the devisin of variables
    printf("Remainder is:- %d \n", remainder);   //Printing the sum of variables
    return 0;     //Returning integer value after succesfull execution
}   //program ends here