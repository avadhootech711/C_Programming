///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Description   : This function displays numbers from starting
//                  point to ending point.
//  Input         : Integer, Integer
//  Output        : None(Void)
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

void RangeDisplay(int iStart , int iEnd)
{
    int iCnt = 0;

    if (iStart > iEnd)
    {
        printf("Invalid Range");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    
}   // End of RangeDisplay

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

    RangeDisplay(iValue1, iValue2);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 :  23    Input2 : 35      Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
//  Input1 :  10    Input2 : 18      Output : 10 11 12 13 14 15 16 17 18
//  Input1 :  10    Input2 : 10      Output : 10
//  Input1 : -10    Input2 : 2       Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2
//  Input1 :  90    Input2 : 18      Output : Invalid range
//
///////////////////////////////////////////////////////////////
