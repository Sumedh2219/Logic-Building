/*
 Problem Statment : Accept N numbers from user and accept one another number as NO
                    check whether NO is present or not.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckNumber(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if (iCnt == iSize)
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
    int iLength = 0;
    int iCnt = 0;
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number of elements :");
    scanf("%d", &iLength);

    printf("Enter the number that you want to search :\n");
    scanf("%d", &iValue);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the %d elements :\n", iLength);
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter the element %d :", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    bRet = CheckNumber(ptr, iLength, iValue);
    if (bRet == true)
    {
        printf("The element %d is present \n", iValue);
    }
    else
    {
        printf("The element %d is not present \n", iValue);
    }

    free(ptr);

    return 0;
}

/*
Test Case:

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number of elements :6
Enter the number that you want to search :
66
Enter the 6 elements :
Enter the element 1 :85
Enter the element 2 :66
Enter the element 3 :3
Enter the element 4 :45
Enter the element 5 :89
Enter the element 6 :90
The element 66 is present

C:\Users\Hp\OneDrive\Desktop\Assign>gcc A15Q1.c -o Myexe

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number of elements :6
Enter the number that you want to search :
67
Enter the 6 elements :
Enter the element 1 :56
Enter the element 2 :65
Enter the element 3 :90
Enter the element 4 :89
Enter the element 5 :98
Enter the element 6 :76
The element 67 is not present
*/