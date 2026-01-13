///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Input         : Integer
//  Output        : Integer
//  Description   : This function accepts a number from the user 
//                  and returns the factorial of all even numbers 
//                  up to that number.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;

}   // End of EvenFactorial

//  TIME COMPLEXITY : O(n/2)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5   Output : 8        (2 * 4 = 8)
//  Input : 8   Output : 384      (2 * 4 * 6 * 8 = 384)
//  Input : 10  Output : 3840     (2 * 4 * 6 * 8 * 10 = 3840)
//  Input : -6  Output : 48       (2 * 4 * 6 = 48)
//  Input : 1   Output : 1        (no even numbers below 2)
//
///////////////////////////////////////////////////////////////