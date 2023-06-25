#include <stdio.h>  //The first line includes the standard input/output library.

int main() {    //The main function is defined with integer return type.

    int a, b, c;   // Three integer variables a, b, and c are declared.    

    printf("Enter the value of a:- ");  //The message "Enter the value of a:- " is displayed on the screen using printf() function.
    scanf("%d", &a);    //The scanf() function is used to read an integer input from the user and store it in variable a.
    printf("Enter the value of b:- ");  //The message "Enter the value of b:- " is displayed on the screen using printf() function.
    scanf("%d", &b);    //The scanf() function is used again to read an integer input from the user and store it in variable b.

    c = a + b;  //The sum of a and b is assigned to variable c using = operator.
    printf("Sum of '%d' and '%d' is %d.", a , b , c);   //The message "Sum of '%d' and '%d' is %d." is displayed on the screen using printf() function where %d are replaced by the values of a, b, and c respectively.
    return 0;  //The main function returns 0. 
}   //Program ends here