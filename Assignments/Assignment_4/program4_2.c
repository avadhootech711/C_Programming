///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name  : FactRev
//  Description    : It accepts a number from user and prints 
//                   all its factors in decreasing order.
//  Input          : Integer
//  Output         : None(Void)
//  Author         : Avadhoot Subhash Pawar
//  Date           : 27/10/2025
//
///////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)                                                // Business Logic
    {
        iNo = - iNo;
    }
    

    for (iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
        
    }

}   // End of FactRev

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

    FactRev(iValue);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 12        Output : 6   4   3   2   1
//  Input : -12       Output : 6   4   3   2   1
//  Input : 13        Output : 1
//  Input : -10       Output : 5   2   1
//  Input : 10        Output : 5   2   1
//
///////////////////////////////////////////////////////////////
