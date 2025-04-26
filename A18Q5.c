/*
 Problem Statment : Accept number from user and display below pattern.

 Input : 8
 Output : 2 4 6 8 10 12 14 16
*/

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= 8; iCnt++)
    {
        printf("%d\t", 2 * iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number :");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/*
Test Case :

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :8
2       4       6       8       10      12      14      16

*/