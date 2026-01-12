///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Description   : Accepts number and returns multiplication 
//                  of all its factors (excluding itself).
//  Input         : Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)                         // Business Logic
    {
        if (iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;

}   // End of MultFact

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

    iRet = MultFact(iValue);

    printf("%d\n", iRet);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 12       Output : 144
//  Input : 13       Output : 1
//  Input : 17       Output : 1
//  Input : 99       Output : 9801
//  Input : 10       Output : 10
//
///////////////////////////////////////////////////////////////