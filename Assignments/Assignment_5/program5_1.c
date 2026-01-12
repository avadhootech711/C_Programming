///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Input         : Integer
//  Output        : None(Void)
//  Description   : It accepts a number from the user and displays 
//                  whether the number is even or odd using if-else.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNum)
{
    if (iNum < 0)                                       // Business Logic
    {
        iNum = -iNum;
    }
    
    if (iNum % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }

}   // End of CheckEvenOdd

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iNumber;

    printf("Enter number: ");
    scanf("%d", &iNumber);

    CheckEvenOdd(iNumber);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10     Output : Even Number
//  Input : 7      Output : Odd Number
//  Input : -4     Output : Even Number
//  Input : -9     Output : Odd Number
//  Input : 11     Output : Odd Number
//
///////////////////////////////////////////////////////////////