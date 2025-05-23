/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 5   iCol = 5

    Output :    a  b  c  d  e
                1  2  3  4  5
                a  b  c  d  e
                1  2  3  4  5
*/

#include <stdio.h>

int main() {
    for (int row = 0; row < 4; row++) {
        if (row % 2 == 0) {
            // Print characters: a to e
            for (char ch = 'a'; ch <= 'e'; ch++) {
                printf("%c  ", ch);
            }
        } else {
            // Print numbers: 1 to 5
            for (int num = 1; num <= 5; num++) {
                printf("%d  ", num);
            }
        }
        printf("\n");
    }
    return 0;
}




