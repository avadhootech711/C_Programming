///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name  : Display
//  Description    : It accepts one integer from the user and
//                   displays that number of '*' symbols on the screen.
//  Input          : Integer
//  Output         : None(Void)
//  Author         : Avadhoot Subhash Pawar
//  Date           : 27/10/2025
//
///////////////////////////////////////////////////////////////


void Display (int iNo)
{
    int iCnt = 0;

    if (iNo < 0)                                                // Business Logic
    {
        iNo = -iNo;
    }

    while (iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }

}   // End of Display

///////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : -1     Output : *
//  Input : 7      Output : *******
//  Input : 0      Output :
//  Input : -2      Output : **
//  Input : 11     Output : ***********
//
///////////////////////////////////////////////////////////////
