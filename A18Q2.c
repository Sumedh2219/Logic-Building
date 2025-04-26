/*
 Problem Statment : Accept number from user and display below pattern.

 Input : 5
 Output : 5 # 4 # 3 # 2 # 1 #
*/


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t #\t",iCnt);
    }

}
int main()
{
    int iValue = 0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    Display(iValue);







    return 0;
}


/*
 Test Case :

 C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
 
Enter the number :5
5        #      4        #      3        #      2        #      1        #

*/