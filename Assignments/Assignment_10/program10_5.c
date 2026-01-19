///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Description   : This function converts area from square feet
//                  into square meter.
//  Input         : Integer
//  Output        : Double
//  Author        : Avadhoot Subhash Pawar
//  Date          : 29/10/2025
//
///////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dAns = 0.0;
    dAns = iValue * 0.0929;

    return dAns;

}   // End of SquareMeter

// TIME COMPLEXITY : O(1)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter : %lf", dRet);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5      Output : 0.464515
//  Input : 7      Output : 0.650321
//  Input : 10     Output : 0.929000
//  Input : 1      Output : 0.092900
//  Input : 0      Output : 0.000000
//
///////////////////////////////////////////////////////////////
