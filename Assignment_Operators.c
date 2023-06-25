#include <stdio.h>      //Prerocessor statement for basic input output added

int main() {   // Main function execution starts here.

    int a, b;   //Variable a and b initialised

    printf("Enter the value of a:- ");   //Prompt message for entering the value of a
    scanf("%d", &a); // taking input for the value of a
    printf("Enter the value of b:- ");//Prompt message for entering the value of b
    scanf("%d", &b);   // taking input for the value of b

    int result = a+= b, result1 = a -= b, result2 = a*= b, result3 = a/= b, result4 = a%=b;    //Calculating results

    printf("Using '+=' %d \n", result);     // Printing results of +=
    printf("Using '-=' %d \n", result1);    // Printing results -=
    printf("Using '*=' %d \n", result2);    // Printing results *=
    printf("Using '/=' %d \n", result3);    // Printing results /=
    printf("Using '%=' %d \n", result4);    // Printing results %=
    return 0;  //Returning integer value after succesfull execution
}   //program ends here