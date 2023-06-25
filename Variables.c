#include <stdio.h>  //main function starts

int main() {   //main function starts 
    //variable declarations
    int a;
    float b;
    long c;
    double d;
    char e;


    //prompt user to enter an integer value and read input using scanf
    printf("Enter Integer value:- ");
    scanf("%d", &a);
    //print the input value as integer
    printf("'%d', it is a Integer value \n", a);

    //prompt user to enter a float value and read input using scanf
    printf("Enter Float value:- ");
    scanf("%f", &b);
    //print the input value as float
    printf("'%f', it is a float value \n", b);

    //prompt user to enter a long value and read input using scanf
    printf("Enter Long value:- ");
    scanf("%ld", &c);
    //print the input value as long
    printf("'%ld', it is a long value \n", c);

    //prompt user to enter a double value and read input using scanf
    printf("Enter Double value:- ");
    scanf("%lf", &d);
    //print the input value as double
    printf("'%lf', it is a double value \n", d);

    //prompt user to enter a character value and read input using scanf
    printf("Enter Character value:- ");
    scanf(" %c", &e);
    //print the input value as character
    printf("'%c' it is a character value.", e);

    return 0; //return 0 to the operating system
}