#include <stdio.h> // includes the standard input/output library

int main() // main function starts
{
    int a = 10, b = 100; // declares and initializes integer variables a and b
    float c = 10.5, d = 100.5; // declares and initializes float variables c and d

    printf("++a = %d \n", ++a); // increments a and prints the value
    printf("a++ = %d \n", a++); // prints the value of a and then increments it

    printf("--b = %d \n", --b); // decrements b and prints the value
    printf("b-- = %d \n", b--); // prints the value of b and then decrements it

    printf("++c = %f \n", ++c); // increments c and prints the value
    printf("c++ = %f \n", c++); // prints the value of c and then increments it

    printf("--d = %f \n", --d); // decrements d and prints the value
    printf("d-- = %f \n", d--); // prints the value of d and then decrements it

    return 0; // indicates successful completion of program
}
