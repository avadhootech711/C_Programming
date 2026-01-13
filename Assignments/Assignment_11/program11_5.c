///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayRev
//  Input         : Integer, Integer
//  Output        : None(Void)
//  Description   : This function displays numbers from starting
//                  point to ending point in reverse order.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart , int iEnd)
{
    int iCnt = 0;

    if (iStart > iEnd)
    {
        printf("Invalid Range");
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
    
}   // End of RangeDisplayRev

//  TIME COMPLEXITY : O(n)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point : ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 :  23    Input2 : 35      Output : 35 34 33 32 31 29 28 27 26 25 24 23
//  Input1 :  10    Input2 : 18      Output : 18 17 16 15 14 13 12 11 10
//  Input1 :  10    Input2 : 10      Output : 10
//  Input1 : -10    Input2 : 2       Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
//  Input1 :  90    Input2 : 18      Output : Invalid range
//
///////////////////////////////////////////////////////////////