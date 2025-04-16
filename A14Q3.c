/*
 Problem Statment : Accept N numbers from user and  accept the number that user want to search and check whether 
                    that number is present or not
*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bflag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }

}
int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0;
    bool bRet = false;


    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    printf("Enter the element that you want to search :\n");
    scanf("%d",&iValue);

    ptr = (int*)malloc(iLength * sizeof(int));


    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter the %d element :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    bRet = CheckNumber(ptr, iLength, iValue);
    if(bRet == true)
    {
        printf("The %d number is present",iValue);
    }
    else
    {
       printf("The %d number  is not present",iValue);
    }








    return 0;
}






/*

Test Case:
C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number of elements :
6
Enter the element that you want to search :
11
Enter the 1 element :85
Enter the 2 element :66
Enter the 3 element :11
Enter the 4 element :80
Enter the 5 element :93
Enter the 6 element :88
The 11 number is present
C:\Users\Hp\OneDrive\Desktop\Assign>gcc A14Q3.c -o Myexe

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number of elements :
6
Enter the element that you want to search :
11
Enter the 1 element :86
Enter the 2 element :65
Enter the 3 element :45
Enter the 4 element :34
Enter the 5 element :32
Enter the 6 element :35
The 11 number  is not present

*/