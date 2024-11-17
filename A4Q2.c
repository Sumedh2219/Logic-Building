/*
  Program Statment : Write a program which accept number from user and display its factors in decreasing order.
*/



#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}




/*
C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :12
6       4       3       2       1

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :13
1

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :10
5       2       1

C:\Users\Hp\OneDrive\Desktop\Assign>

*/