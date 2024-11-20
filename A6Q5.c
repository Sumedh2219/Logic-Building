/*
 Problem Statment : Write a program which accept number from user and display its table in reverse order.
*/


#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for( iCnt = 10; iCnt >=1;  iCnt--)
    {
        printf("%d\t",iNo * iCnt);
    }


}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    TableRev(iValue);


    return 0;
}




/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :2
20      18      16      14      12      10      8       6       4       2

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :5
50      45      40      35      30      25      20      15      10      5

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :-5
50      45      40      35      30      25      20      15      10      5

*/