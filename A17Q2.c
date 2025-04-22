/*
Problem Statment : Accept amount in US dollar and return its corresponding value in indian currency.
                Consider 1$ = 70 ruppes.
*/

#include <stdio.h>

int DollarToINR(int iNo)
{
    int iCnt = 0, iInr = 0;
    iInr = iNo * 70;
    return iInr;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter currency in dollar :");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);
    printf("Value of INR is %d", iRet);

    return 0;
}

/*
Test Case :

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter currency in dollar :10
Value of INR is 700

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter currency in dollar :3
Value of INR is 210

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter currency in dollar :1200
Value of INR is 84000

*/