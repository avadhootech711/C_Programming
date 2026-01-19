///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayEven
//  Description   : This function displays all even numbers from
//                  starting point to ending point in serial.
//  Input         : Integer, Integer
//  Output        : None(Void)
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if (iStart > iEnd)
    {
        printf("Invalid Range");
        return;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if ((iCnt % 2)==0)
        {
            printf("%d\t", iCnt);
        }
    }

}   // End of RangeDisplayEven

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

    RangeDisplayEven(iValue1, iValue2);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 :  23    Input2 : 35      Output : 24 26 28 30 32 34
//  Input1 :  10    Input2 : 18      Output : 10 12 14 16 18
//  Input1 :  10    Input2 : 10      Output : 10
//  Input1 : -10    Input2 : 2       Output : -10 -8 -6 -4 -2 0 2
//  Input1 :  90    Input2 : 18      Output : Invalid Range
//
///////////////////////////////////////////////////////////////
