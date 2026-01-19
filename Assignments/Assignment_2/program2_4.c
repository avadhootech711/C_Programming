///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name  : Display
//  Description    : It accepts two integers from the user.
//                   The first number is displayed as many times
//                   as the value of the second number (frequency).
//                   If frequency is negative, it is converted to positive.
//  Input          : Integer, Integer
//  Output         : None(Void)
//  Author         : Avadhoot Subhash Pawar
//  Date           : 27/10/2025
//
///////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if (iFrequency < 0)                             // Business Logic
    {
        iFrequency = - iFrequency;
    }

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    } 

}   // End of Display

///////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    printf("Enter Frequency : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 12       Input2 : 5        Output : 12 12 12
//  Input1 : -2       Input2 : 3        Output : -2 -2 -2
//  Input1 : 21       Input2 : -3       Output : 21 21 21
//  Input1 : -2       Input2 : 0        Output :
//  Input1 : 11       Input2 : -4       Output : 11 11 11 11
//
///////////////////////////////////////////////////////////////
