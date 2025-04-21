/*
 Problem Statment : Write a program which accept number from user and print numbers line.
*/

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/*
Test Case :


C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number:
6
-6      -5      -4      -3      -2      -1      0       1       2       3       4       5       6

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number:
4
-4      -3      -2      -1      0       1       2       3       4

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number:
2
-2      -1      0       1       2
*/
