// Working of logical operators

#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;
    // performing logical AND operation
    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);
    // performing logical AND operation
    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    // performing logical OR operation
    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    // performing logical NOT operation
    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    // performing logical NOT operation
    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    // returning integer value
    return 0;
}
