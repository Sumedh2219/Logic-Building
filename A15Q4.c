/*
 Problem Statment : Accept N numbers from user and accept Range, Display all elements from
                      that range.
*/

#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}
int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;

    printf("Enter the number of elements:");
    scanf("%d", &iLength);

    printf("Enter the Starting Point:");
    scanf("%d", &iValue1);

    printf("Enter the Ending Point:");
    scanf("%d", &iValue2);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the %d elements :\n", iLength);

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter the element %d :", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    Range(ptr, iLength, iValue1, iValue2);

    free(ptr);

    return 0;
}

/*
Test Case:

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number of elements:6
Enter the Starting Point:60
Enter the Ending Point:90
Enter the 6 elements :
Enter the element 1 :56
Enter the element 2 :77
Enter the element 3 :88
Enter the element 4 :09
Enter the element 5 :89
Enter the element 6 :67
77      88      89      67

*/