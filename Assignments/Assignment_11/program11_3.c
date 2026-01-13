///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Input         : Integer, Integer
//  Output        : Integer
//  Description   : This function returns the addition of all  
//                  positive numbers between the given range.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////


int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;

}   // End of RangeSum

//  TIME COMPLEXITY : O(n)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point : ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1 , iValue2);

    if(iValue1 >= 0 && iValue2 >= 0 && iValue1 <= iValue2)
    {
        printf("Addition is : %d", iRet);
    }

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 :  23    Input2 :  30       Output : 212
//  Input1 :  10    Input2 :  18       Output : 126
//  Input1 :  10    Input2 :  13       Output : 46
//  Input1 : -10    Input2 :  2        Output : Invalid Range
//  Input1 :  90    Input2 :  18       Output : Invalid Range
//  Input1 : -4     Input2 : -1        Output : Invalid Range
//
///////////////////////////////////////////////////////////////
