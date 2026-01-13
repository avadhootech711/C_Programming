///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : KMtoMeter
//  Input         : Integer
//  Output        : Integer
//  Description   : This function converts distance from 
//                  kilometers to meters.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 29/10/2025
//
///////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iAns = 0;
    iAns = iNo * 1000;

    return iAns;

}   // End of KMtoMeter

//  TIME COMPLEXITY : O(1)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance in KM : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meters : %d", iRet);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 1      Output : 1000
//  Input : 5      Output : 5000
//  Input : 12     Output : 12000
//  Input : 0      Output : 0
//  Input : 23     Output : 23000
//
///////////////////////////////////////////////////////////////