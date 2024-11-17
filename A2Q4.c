/*
  problem statment : accept two numbers from user and display first number in second number of times.
*/



#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
         if(iFrequency<0)
         {
            iFrequency = -(iFrequency);
         }
        for(iCnt = 1; iCnt <= iFrequency; iCnt++)
        {
            printf("%d\t",iNo);
        }

}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Enter number : \n");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}






/*
  Enter number :
12
Enter number :
5
12      12      12      12      12


C:\Users\Hp\OneDrive\Desktop\Assign>Myexe.exe
Enter number :
-2
Enter number :
3
-2      -2      -2


C:\Users\Hp\OneDrive\Desktop\Assign>Myexe.exe
Enter number :
21
Enter number :
-3
21      21      21


C:\Users\Hp\OneDrive\Desktop\Assign>Myexe.exe
Enter number :
-2
Enter number :
0

*/