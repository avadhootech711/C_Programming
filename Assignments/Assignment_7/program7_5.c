///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Input         : Integer
//  Output        : None(Void)
//  Description   : This function accepts a number from the user
//                  and prints the first five multiples of that number.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
    
    printf("\n");

}   // End of MultipleDisplay

//  TIME COMPLEXITY : O(1)

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

    MultipleDisplay(iValue);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 4    Output : 4   8   12   16   20
//  Input : 7    Output : 7   14   21   28   35
//  Input : -3   Output : 3   6   9   12   15
//  Input : 1    Output : 1   2   3   4   5
//  Input : 0    Output : 0   0   0   0   0
//
///////////////////////////////////////////////////////////////