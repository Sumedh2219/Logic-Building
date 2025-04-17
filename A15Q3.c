/*
 Problem Statment : Accept N numbers from user and accept one another number as NO
                    and return the index of last occurance of that number.
*/

#include <stdio.h>
#include <stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int Index = -1;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            Index = iCnt;
        }
    }
    return Index;
}
int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0, iRet = 0;

    printf("Enter the number of emements :");
    scanf("%d", &iLength);

    printf("Enter the number whose Last occurance you want :\n");
    scanf("%d", &iValue);

    ptr = (int *)malloc(iLength * sizeof(int));

    if (ptr == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the %d elements :\n", iLength);

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter the element %d :", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = FirstOcc(ptr, iLength, iValue);
    if (iRet != -1)
    {
        printf("Last occurance of number is %d", iRet);
    }
    else
    {
        printf("There is no such a number");
    }

    free(ptr);

    return 0;
}

/*
Test Case:

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe

Enter the number of emements :6
Enter the number whose Last occurance you want :
66
Enter the 6 elements :
Enter the element 1 :54
Enter the element 2 :89
Enter the element 3 :66
Enter the element 4 :87
Enter the element 5 :66
Enter the element 6 :54
Last occurance of number is 4

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number of emements :6
Enter the number whose Last occurance you want :
34
Enter the 6 elements :
Enter the element 1 :43
Enter the element 2 :67
Enter the element 3 :34
Enter the element 4 :57
Enter the element 5 :42
Enter the element 6 :34
Last occurance of number is 5
*/