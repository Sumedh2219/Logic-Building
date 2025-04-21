/*
 Problem Statment : Write a program which accept number from user and displays first five multiples of it.
*/


#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",iNo*iCnt);
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}





/*
Test Case :

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number:
4
4       8       12      16      20

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number:
2
2       4       6       8       10

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number:
3
3       6       9       12      15

*/