///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Print_Factors
//  Description   : This function prints all the positive factors
//                  of the given number in ascending order.
//  Input         : Integer
//  Output        : None(Void)
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

void Print_Factors(int iNumber)
{
    int iCnt = 0;

    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }

    for(iCnt = 1; iCnt <= iNumber/2; iCnt++)
    {
        if ((iNumber % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }

}   // End of Print_Factors

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

    Print_Factors(iNumber);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :  12      Output : 1 2 3 4 6
//  Input :  10      Output : 1 2 5
//  Input :  2       Output : 1
//  Input : -9       Output : 1 3
//  Input :  18      Output : 1 2 3 6 9
//
///////////////////////////////////////////////////////////////
