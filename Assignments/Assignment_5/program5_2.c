///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : FindMax
//  Description   : It accepts two integers from the user and 
//                  returns the larger number using if-else condition.
//  Input         : Integer, Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////

int FindMax(int iNo1, int iNo2)
{
    if (iNo1 > iNo2)                                            // Business Logic
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }

}   // End of FindMax

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iNum1, iNum2, iResult;

    printf("Enter two numbers: ");
    scanf("%d %d", &iNum1, &iNum2);

    iResult = FindMax(iNum1, iNum2);

    printf("Maximum is: %d\n", iResult);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10  Input2 : 20     Output : Maximum is: 20
//  Input1 : 25  Input2 : 12     Output : Maximum is: 25
//  Input1 : -5  Input2 : -2     Output : Maximum is: -2
//  Input1 : 7   Input2 : 7      Output : Maximum is: 7
//
///////////////////////////////////////////////////////////////
