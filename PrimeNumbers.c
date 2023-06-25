#include <stdio.h>

int main() {

    int num, counter = 0, i;

    // Take input from user
    printf("Enter a number:- ");
    scanf("%d", &num);

    // Loop through the numbers and count the number of factors
    for (i = 1; i <= num; i++)
    {
    if (num%i == 0) {
        counter++; // if i is a factor of num then increase the counter
    }
}

    // Check whether the number is prime or not
    if(counter == 2) {
    printf("'%d', is a prime number", num);
    }
    else {
    printf("'%d', is not a prime number", num);
    }

    return 0;

}