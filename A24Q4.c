/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 5   iCol = 5

    Output :    1  2  3  4  5 
                -1 -2 -3 -4 -5
                1  2  3  4  5
                1 -2 -3 -4 -5 
*/


#include <stdio.h>

int main() {
    for (int row = 0; row < 4; row++) {
        if (row % 2 == 1) {
            
            for (int num1 = -5; num1 <= -1; num1++) {
                printf("%d\t  ", num1);
            }
        } else {
            // Print numbers: 1 to 5
            for (int num2 = 1; num2 <= 5; num2++) {
                printf("%d \t ", num2);
            }
        }
        printf("\n");
    }
    return 0;
}
