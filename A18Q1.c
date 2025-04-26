/*
 Problem Statment : Accept number from user and display below pattern.

 Input : 5
 Output : A B C D E
*/

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char cLetter = 'A';
    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c\t", cLetter + iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/*
 Test Case :

 C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :5
A       B       C       D       E

*/