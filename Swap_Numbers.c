#include <stdio.h>

int main() {

    int c, d; // declaring two integer variables c and d

    printf("Enter the value of c:- ");
    scanf("%d", &c); // taking input for c from user

    printf("Enter the value of d:- ");
    scanf("%d", &d); // taking input for d from user

    printf("Without swapping numbers:- 'c = %d' and 'd = %d' \n" , c, d); // printing the values of c and d before swapping

    c = c + d;  // adding values of c and d and storing the result in c variable
    d = c - d;  // subtracting the value of d from c and storing the result in d variable
    c = c - d;  // subtracting the value of new d from c and storing the result in c variable

    printf("After swapping numbers:- 'c = %d' and 'd = %d'" , c, d); // printing the values of c and d after swapping
    return 0;   // Return 0 after succesfull execution of the program
}