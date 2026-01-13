///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Sum_of_Factors
//  Input         : Integer
//  Output        : Integer
//  Description   : This function returns the sum of all
//                  positive factors of the given number.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

int Sum_of_Factors(int iNumber)
{
    int iCnt = 0, iSum = 0;

    if(iNumber < 0)
    {
        iNumber = -iNumber;
    }

    for(iCnt = 1; iCnt <= iNumber/2; iCnt++)
    {
        if ((iNumber % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        
    }

    return iSum;

}   // End of Sum_of_Factors

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

    printf("%d\n", Sum_of_Factors(iNumber));

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :   6      Output : 6
//  Input :  10      Output : 8
//  Input :  20      Output : 22
//  Input : -12      Output : 16
//  Input :  24      Output : 36
//
///////////////////////////////////////////////////////////////