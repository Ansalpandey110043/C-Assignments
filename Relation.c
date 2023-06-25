// Working of relational operators
#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10;   // Declare and initialize variables

    // Use relational operator == (equal to) to compare a and b
    printf("%d == %d is %d \n", a, b, a == b);

    // Use relational operator == (equal to) to compare a and c
    printf("%d == %d is %d \n", a, c, a == c);

    // Use relational operator > (greater than) to compare a and b
    printf("%d > %d is %d \n", a, b, a > b);

    // Use relational operator > (greater than) to compare a and c
    printf("%d > %d is %d \n", a, c, a > c);

    // Use relational operator < (less than) to compare a and b
    printf("%d < %d is %d \n", a, b, a < b);

    // Use relational operator < (less than) to compare a and c
    printf("%d < %d is %d \n", a, c, a < c);

    // Use relational operator != (not equal to) to compare a and b
    printf("%d != %d is %d \n", a, b, a != b);

    // Use relational operator != (not equal to) to compare a and c
    printf("%d != %d is %d \n", a, c, a != c);

    // Use relational operator >= (greater than or equal to) to compare a and b
    printf("%d >= %d is %d \n", a, b, a >= b);

    // Use relational operator >= (greater than or equal to) to compare a and c
    printf("%d >= %d is %d \n", a, c, a >= c);

    // Use relational operator <= (less than or equal to) to compare a and b
    printf("%d <= %d is %d \n", a, b, a <= b);

    // Use relational operator <= (less than or equal to) to compare a and c
    printf("%d <= %d is %d \n", a, c, a <= c);

    return 0;
}