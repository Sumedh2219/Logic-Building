/*
 Problem Statment : Accept N numbers from user and return product of all odd elements
*/

#include <stdio.h>
#include <stdlib.h>

int ProductOdd(int Arr[], int iSize)
{
    int iCnt = 0;
    int iProduct = 1;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 == 1)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }
    return iProduct;
}
int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of emements :");
    scanf("%d", &iLength);

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

    iRet = ProductOdd(ptr, iLength);
    printf("Product of all odd numbers is :%d", iRet);

    free(ptr);

    return 0;
}

/*

Test Case:
C:\Users\Hp\OneDrive\Desktop\Assign>Myexe

Enter the number of emements :5
Enter the 5 elements :
Enter the element 1 :1
Enter the element 2 :2
Enter the element 3 :3
Enter the element 4 :4
Enter the element 5 :5
Product of all odd numbers is :15

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe

Enter the number of emements :5
Enter the 5 elements :
Enter the element 1 :10
Enter the element 2 :13
Enter the element 3 :2
Enter the element 4 :1
Enter the element 5 :3
Product of all odd numbers is :39

*/