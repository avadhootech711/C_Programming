///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : OddDisplay
//  Description   : This function accepts a number from the user
//                  and prints all odd numbers up to that number.
//  Input         : Integer
//  Output        : None(Void)
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            printf("%d\t", iCnt);
        }
    }

    printf("\n");

}   // End of OddDisplay

//  TIME COMPLEXITY : O(n)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 18   Output : 1   3   5   7   9   11   13   15   17
//  Input : 7    Output : 1   3   5   7
//  Input : -9   Output : 1   3   5   7   9
//  Input : 1    Output : 1
//  Input : 0    Output : 
//
///////////////////////////////////////////////////////////////
