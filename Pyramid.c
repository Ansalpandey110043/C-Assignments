#include <stdio.h>

int main()
{
   int rows; // Initalising a variable rows.

   printf("Enter the no. of rows: "); // Taking input from the user using printf statement.
   scanf("%d", &rows);                // It reads the input and stores it on the variable rows.
   // Using nested loops
   for (int i = 1; i <= rows; i++) // This outer forr loop cycle from 1 to the value of rows, it represents current row no.

   {
      for (int j = 1; j <= rows - i; j++) // This inner loop prints spaces to align the asterisks in a right-aligned triangle pattern.
      {
         printf(" "); // Printing space
      }
      for (int k = 1; k <= i; k++) // This 2nd inner loop is controlled by k.
      {
         printf("* "); // It prints the asterisks in each row, gradually increasing their number.
      }
      printf("\n"); // A newline character is printed after each row to move to the next line.
   }

   return 0; // Returning 0 to show that the program is ended.
}
