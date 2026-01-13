///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Sum_of_Even_Factors
//  Input         : Integer
//  Output        : Integer
//  Description   : This function returns the sum of all even
//                  factors of the given number (excluding the number itself).
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

int Sum_of_Even_Factors(int iNumber)
{
    int iCnt = 0, iSum = 0;

    if(iNumber < 0)
    {
        iNumber = -iNumber;
    }

    for(iCnt = 2; iCnt <= iNumber/2; iCnt += 2)
    {
        if ((iNumber % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;

}   //End of Sum_of_Even_Factors

//  TIME COMPLEXITY : O(N/2)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iNumber;

    printf("Enter Number : ");
    scanf("%d", &iNumber);

    printf("%d\n", Sum_of_Even_Factors(iNumber));

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :  12        Output : 12
//  Input :  18        Output : 8
//  Input :   7        Output : 0
//  Input : -20        Output : 16
//  Input :  24        Output : 32
//
///////////////////////////////////////////////////////////////