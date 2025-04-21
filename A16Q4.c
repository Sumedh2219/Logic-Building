/*
 Problem Statment : Write a program which accept number from user and print all odd numbers till that number.
*/

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 1)
        {
            printf("%d\t", iCnt);
        }
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
18
1       3       5       7       9       11      13      15      17

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number:
12
1       3       5       7       9       11

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number:
3
1       3
*/