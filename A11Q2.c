/*
 Problem Statment : Write a program which accept number from user and check
                     whether it contains 0 in it or not.
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChckZero(int iNo)
{
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 0)
        {

            return TRUE;
        }
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number :");
    scanf("%d", &iValue);

    bRet = ChckZero(iValue);

    if (bRet == TRUE)
    {
        printf("It Contains 0");
    }

    else
    {
        printf("It Not Contains 0");
    }

    return 0;
}

/*
 C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :2395
It Not Contains 0

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :1018
It Contains 0

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :9000
It Contains 0

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :10687
It Contains 0



*/