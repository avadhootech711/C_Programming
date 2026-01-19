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
//                  and prints numbers from -n to n.
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

    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");

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
//  Input : 4     Output : -4  -3  -2  -1  0  1  2  3  4
//  Input : 3     Output : -3  -2  -1  0  1  2  3
//  Input : -5    Output : -5  -4  -3  -2  -1  0  1  2  3  4  5
//  Input : 0     Output : 0
//  Input : -1    Output : -1   0   1
//
///////////////////////////////////////////////////////////////
