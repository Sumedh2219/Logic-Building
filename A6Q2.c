/*
 Problem Statment : Accept single digit from user and print it into word.
*/



#include<stdio.h>


void Disply(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
   switch (iNo)
   {
   case 0:
    printf("Zero\n");
    break;

   case 1:
    printf("One\n");
    break;

   case 2:
    printf("Two\n");
    break;

   case 3:
    printf("Three\n");
    break;

   case 4:
    printf("Four\n");
    break;

   case 5:
    printf("Five\n");
    break;

   case 6:
    printf("Six\n");
    break;

   case 7:
    printf("Seven\n");
    break;

   case 8:
    printf("Eight\n");
    break;

   case 9:
    printf("Nine\n");
    break;

   default:
    printf("Invalid Number(Please enter the number in range(0-9))");
    break;
   }
}
int main()
{
    int iValue = 0;

    printf("Enter Number in range(0-9) :");
    scanf("%d",&iValue);

    Disply(iValue);


    return 0;
}




/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number in range(0-9) :9
Nine

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number in range(0-9) :-3
Three

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number in range(0-9) :6
Six

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number in range(0-9) :12
Invalid Number(Please enter the number in range(0-9))

*/