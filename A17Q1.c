/*
 Problem Statment : Write a program which accept number from user and display below pattern.

    Input : 5
    Output : * * * * * # # # # #
*/

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/*
Test Case :

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter number :
5
*       *       *       *       *       #       #       #       #       #


C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter number :
6
*       *       *       *       *       *       #       #       #       #       #       #


C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter number :
-3
*       *       *       #       #       #


C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter number :
2
*       *       #       #

*/