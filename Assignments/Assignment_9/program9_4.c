///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : OddFactorial
//  Description   : This function accepts a number from the user 
//                  and returns the factorial of all odd numbers 
//                  up to that number.
//  Input         : Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;

}   // End of OddFactorial

//  TIME COMPLEXITY : O(n/2)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5   Output : 15       (1 * 3 * 5 = 15)
//  Input : 8   Output : 105      (1 * 3 * 5 * 7 = 105)
//  Input : 9   Output : 945      (1 * 3 * 5 * 7 * 9 = 945)
//  Input : -7  Output : 105      (1 * 3 * 5 * 7 = 105)
//  Input : 1   Output : 1
//
///////////////////////////////////////////////////////////////
