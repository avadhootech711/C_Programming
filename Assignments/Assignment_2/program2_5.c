
///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////
//
//  Function Name  : CheckEvenOdd
//  Input          : Integer
//  Output         : Boolean
//  Description    : It accepts one integer from the user and 
//                   returns true if the number is even, otherwise false.
//                   If number is negative, it converts it to positive.
//  Author         : Avadhoot Subhash Pawar
//  Date           : 27/10/2025
//
///////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;                                         // Business Logic

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}   // End of CheckEvenOdd

///////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is Even number\n", iValue);
    }
    else
    {
        printf("%d is Odd number\n", iValue);
    }

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 11       Output : 11 is Odd number
//  Input : -2       Output : -2 is Even number
//  Input : 1        Output : 1 is Odd number
//  Input : 10       Output : 10 is Even number
//  Input : 12       Output : 12 is Even number
//
///////////////////////////////////////////////////////////////