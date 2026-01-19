///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Description   : It accepts a number from the user and returns the
//                  difference between summation of all its factors 
//                  and non-factors.
//  Input         : Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;
    int iDiff = 0;

    if(iNo < 0)                         // Business Logic
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    iDiff = iFactSum - iNonFactSum;

    return iDiff;

}   // End of FactDiff

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 12      Output : -34   (16 - 50)
//  Input : 10      Output : -29   (8 - 37)
//  Input : -10     Output : -29   (8 - 37)
//  Input : 13      Output : -65   (1 - 66)
//  Input : 11      Output : -53   (1 - 54)
//
///////////////////////////////////////////////////////////////
