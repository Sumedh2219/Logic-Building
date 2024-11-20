/* 
  Problem Statment : Write a program which accept number from user and display its table.
*/



#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }


}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Table(iValue);


    return 0;
}






/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :2
2       4       6       8       10      12      14      16      18      20

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :5
5       10      15      20      25      30      35      40      45      50

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :-5
5       10      15      20      25      30      35      40      45      50



*/