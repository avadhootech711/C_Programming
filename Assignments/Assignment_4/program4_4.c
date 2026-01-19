///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Description   : It accepts a number from the user and returns 
//                  the summation of all numbers that are NOT factors of it.
//  Input         : Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)                                             // Business Logic
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;

}   // End of SumNonFact

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n", iRet);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 12       Output : 50
//  Input : 10       Output : 37
//  Input : -10      Output : 37
//  Input : 13       Output : 78
//
///////////////////////////////////////////////////////////////
