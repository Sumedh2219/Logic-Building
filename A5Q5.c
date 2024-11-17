/*
 Problem Statment : Write a program which accept number from user and print first 5 multiples of that number.

 Input : 4
 Output : 4 8 12 16 20

*/


#include<stdio.h>

void DisplayMultiple(int iNo)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt <= 5; iCnt++)
   {
       printf("%d\t",(iNo*iCnt));
   }


}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayMultiple(iValue);

    return 0;
}


/*

 C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter number : 4
4       8       12      16      20

*/