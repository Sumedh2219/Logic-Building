/*
 Problem Statment : Write a program which accept number from user and print its numbers line.

 Input : 4
 Output : -4 -3 -2 -1 0 1 2 3 4 

*/


#include<stdio.h>
void Display(int iNo)
{
   int iCnt = 0;

  
    for(iCnt = -iNo; iCnt <= 0; iCnt++)
    {
        printf("%d\t",iCnt);
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
         printf("%d\t",iCnt);
    }

}
int main()
{
   int iValue = 0;

   printf("Enter number : ");
   scanf("%d",&iValue);
   
   Display(iValue);

    return 0;
}




/*

 C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter number : 4
-4      -3      -2      -1      0       1       2       3       4

*/