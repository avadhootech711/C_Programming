///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : This function accepts a number from the user
//                  and prints '*' N times followed by '#' N times.
//  Input         : Integer
//  Output        : None(Void)
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;   

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= (iNo * 2); iCnt++)
    {
        if (iCnt <= iNo)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
    }

}   // End of Display

//  TIME COMPLEXITY : O(n)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

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
//  Input : 4   Output : *   *   *   *   #   #   #   #
//  Input : 5   Output : *   *   *   *   *   #   #   #   #   #
//  Input : -3  Output : *   *   *   #   #   #
//  Input : 1   Output : *   #
//  Input : 0   Output : 
//
///////////////////////////////////////////////////////////////
