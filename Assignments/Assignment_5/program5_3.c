///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Input         : Integer
//  Output        : Void
//  Description   : It accepts a year from the user and checks 
//                  whether it is a leap year or not.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if((iYear % 400 == 0) || ((iYear % 4 == 0) && (iYear % 100 != 0)))              // Business Logic
    {
        printf("%d is a Leap Year\n", iYear);
    }
    else
    {
        printf("%d is not a Leap Year\n", iYear);
    }

}   // End of CheckLeapYear

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iYr;

    printf("Enter Year : ");
    scanf("%d",&iYr);

    CheckLeapYear(iYr);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 2020     Output : 2020 is a Leap Year
//  Input : 2023     Output : 2023 is not a Leap Year
//  Input : 1900     Output : 1900 is not a Leap Year
//  Input : 2000     Output : 2000 is a Leap Year
//
///////////////////////////////////////////////////////////////