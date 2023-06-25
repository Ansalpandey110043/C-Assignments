#include <stdio.h>

int main() {
   int term1 = 0, term2 = 1, nextTerm = 0, n;  //Initialising and declaring 3 variables and a variable for number of terms.

   printf("Enter the no. of terms: "); //Taking input from the user.
   scanf("%d", &n);  // It reads the input and stores it in variable n.

   printf("Fibonacci Series: "); //printing statement 
   //Using do while statement to print the fibonacci series.
    do {
      printf("%d ", term1); //Printing the current value of num1 using printf statement.
      nextTerm = term1 + term2; //Adding term1 and term2 and storing it in nextTerm.
      term1 = term2;   //The values of term1 and term2 is updated num1 is assigned the value of term2.
      term2 = nextTerm;  //term2 is assigned the value of nextTerm.
      n--;  //This loop also decreases the value of n by 1 with each cycle busing n--.
   } while(n > 0);   //Keep looping until n > 0.

   return 0;   //return 0 to indicate that the program is finished.
}
