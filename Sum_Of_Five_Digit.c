#include <stdio.h>  //includes standard input-output library.
int main(){ //The main function is defined with the return type int.
    int num;    //declares and initializes an integer variable named num.
    printf("Enter the five digit number:- ");   //Print a message on the console to ask the user to enter a five-digit number
    scanf("%d", &num);  //Read an integer input from the user and store it in the 'num' variable
    int sum = 0;    //Initialize an integer variable 'sum' with the value 0
    
    while(num != 0){    //Start a while loop that will run until 'num' is not equal to 0
        sum += num % 10;    //Add the last digit of 'num' to 'sum'
        num = num/10;   // Remove the last digit from 'num'
    } //End of the while loop
    printf("Digit sum: %d", sum);   //Print the sum of digits of the input number on the console
    return 0;   // Return 0 after succesfull execution of the program
}