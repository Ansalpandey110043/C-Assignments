#include <stdio.h>  //The first line includes the standard input-output header file stdio.h.
int main()  //The main function is defined with the return type int.
{
    /* Four variables of different data types, namely int, float, double, and char, are declared. */
    int a;
    float b;
    double c;
    char d;
    printf("Size of int= %lu bytes\n",sizeof(a));   //The printf function is used to print the size of the int variable in bytes using the sizeof operator.
    printf("Size of float= %lu bytes\n",sizeof(b)); //The printf function is used to print the size of the float variable in bytes using the sizeof operator.
    printf("Size of double= %lu bytes\n",sizeof(c));    //The printf function is used to print the size of the double variable in bytes using the sizeof operator.
    printf("Size of char= %lu byte\n",sizeof(d));   //The printf function is used to print the size of the char variable in bytes using the sizeof operator.

    return 0;   //The return statement returns 0 to indicate successful execution of the program.
}   //The program ends.