///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Input         : Integer
//  Output        : None(Void)
//  Description   : It accepts a number from the user and displays 
//                  all numbers that are NOT factors of it.
//  Author        : Avadhoot Subhash  Pawar
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////


void NonFact(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)                                    // Business Logic
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            printf("%d\t", iCnt);
        }
    }

}   // End of NonFact

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;

}   // End of main


///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 12       Output : 5   7   8   9   10   11
//  Input : 13       Output : 2   3   4   5   6   7   8   9   10   11   12
//  Input : 10       Output : 3   4   6   7   8   9
//  Input : -10      Output : 3   4   6   7   8   9
//  Input : 9        Output : 2   4   5   6   7   8
//
///////////////////////////////////////////////////////////////