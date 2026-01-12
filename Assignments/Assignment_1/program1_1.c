///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Divide
//  Description :   It is used to perform division
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Avadhoot Subhash Pawar
//  Date :          27/10/2025
//
///////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)                       // Business Logic
    {
        return -1;
    }

    iAns = iNo1 / iNo2;
    return iAns;

}   // End of Divide

///////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is %d", iRet);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 15       Input2 : 5        Output : Division is 3
//  Input1 : 10       Input2 : 2        Output : Division is 5
//  Input1 : 11       Input2 : 0        Output : Division is -1
//  Input1 : 13       Input2 : 0        Output : Division is -1
//  Input1 : 12       Input2 : 6        Output : Division is 2
//
///////////////////////////////////////////////////////////////
