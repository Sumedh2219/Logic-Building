/*
 Problem Statment :

       Input : 5
       Output : $ * $ * $ * $ * $ *
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
        printf("$\t*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/*
Test Case :

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :
5
$       *       $       *       $       *       $       *       $       *

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :
3
$       *       $       *       $       *

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :
-2
$       *       $       *

*/