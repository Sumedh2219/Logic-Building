/*
  problem statment : accept one number and check whethere it is divisible by 5 or not.
*/

#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if (bRet == TRUE)
    {
        printf("Divisible By 5");
    }
    else
    {
        printf("Not Divisible By 5");
    }

    return 0;
}