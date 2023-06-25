#include <stdio.h>  //Prerocessor statement for basic input output added

int main() {    // Main function execution starts here.

    int a = 1;  //Varible for storing the printing value
    int age;    //Variable initialised for storing the data of age
    printf("Enter the age:- ");     //Prompt message for entering the value of age
    scanf("%d", &age);     //Taking input of age from the user

    if(age == 18){  //Checking if age is equal to 18
        printf("Your age is equal to '18' years. = %d", a);     //Printing the messgae 
    }
    else if (age > 18) {    // Checking if the age is grater than 18 
        printf("Your age is greater than '18' years. = %d", a);     //Printing the value 1
    }
    else {
        printf("Your age is smaller than 18 years.");   //Printing the message for age samller than 18
    }
    return 0;   //Returning integer value after succesfull execution
}   //program ends here