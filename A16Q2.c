/*
 Problem Statment : Write a program which accept number from user and print numbers till that number.
*/

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
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
8
1       2       3       4       5       6       7       8

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number:
9
1       2       3       4       5       6       7       8       9

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number:
5
1       2       3       4       5

*/