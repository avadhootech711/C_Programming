///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Count_Factors
//  Description   : This function returns the count of all
//                  positive factors of the given number.
//  Input         : Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

int Count_Factors(int iNumber)
{
    int iCnt = 0, iCount = 0;

    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }

    for(iCnt = 1; iCnt <= iNumber/2; iCnt++)
    {
        if ((iNumber % iCnt) == 0)
        {
            iCount++;
        }
    }

    return iCount;

}   // End of Count_Factors

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

    printf("%d\n", Count_Factors(iNumber));

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :  10      Output : 3
//  Input :  12      Output : 5
//  Input :   2      Output : 1
//  Input : -10      Output : 3
//  Input :  20      Output : 5
//
///////////////////////////////////////////////////////////////
