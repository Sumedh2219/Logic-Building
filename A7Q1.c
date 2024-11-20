/*
 Problem Statment : Write a program which accept number from user and display below pattern .

 Input : 5
 Output : * * * * * # # # # #
*/



#include<stdio.h>
void Display(int iNo)
{

    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
        
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
        
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}





/*
C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 5
*       *       *       *       *       #       #       #       #       #

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 6
*       *       *       *       *       *       #       #       #       #       #       #

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : -5
*       *       *       *       *       #       #       #       #       #

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 2
*       *       #       #


*/