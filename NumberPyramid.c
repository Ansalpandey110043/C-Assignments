#include <stdio.h>

int main() {
    int rows = 4, col;//Initialized variable rows and col.
//Using nested for loops to make pattern like pyramid with numbers.
    for(int col = 1; col <= rows; col++)// The outer loop cycle from 1 to 4 values.
    {
        for(int j = 1; j <= rows-col; j++)//The inner for loop prints the necessary number of gaps before displaying the numbers in the current row.
        {
            printf(" ");//It prints gaps between two stars
        }
        for(int k = 1; k <= col; k++)//This inner for loop prints the numbers in the current row, with the value of "i" being printed "i" no. of times.
        {
            printf("%d ", col);
        }
        printf("\n");//After each row is printed, a newline character is printed to start a new row.
    }

    return 0;//return 0 to indicate that the program has finished.
}
