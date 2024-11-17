/*
  problem statment : write a program which accept one number from user and print that number of even numbers on screen
*/

#include <stdio.h>

void PrintEven(int iNo)
{

    int iCnt = 0;
    if (iNo <= 0)
    {
        return;
    }
    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%d\t", 2 * (iCnt + 1));
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}

/*
  C:\Users\Hp\OneDrive\Desktop\Assign>gcc A3Q1.c -o Myexe

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe.exe
Enter number
7
2       4       6       8       10      12      14
C:\Users\Hp\OneDrive\Desktop\Assign>

*/