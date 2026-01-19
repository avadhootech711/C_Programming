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
//                  and display numbers till given number
//  Input         : Integer
//  Output        : None(Void)
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");

    if (iNo < 0)
    {
        for (iCnt = -1; iCnt >= iNo; iCnt--)
        {
            printf("%d\t", iCnt);
        }
        return;
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
//  Input : 8     Output : 1   2   3   4   5   6   7   8
//  Input : 3     Output : 1   2   3
//  Input : -5    Output : -1  -2  -3  -4  -5
//  Input : -3    Output : -1  -2  -3
//  Input : 0     Output : 
//
///////////////////////////////////////////////////////////////
