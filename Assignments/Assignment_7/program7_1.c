///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : This function accepts a number from the user 
//                  and prints that number of '$' and '*' symbols 
//                  alternately on the screen. 
//  Input         : Integer
//  Output        : None(Void)
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }

    printf("\n");

}   // End of Pattern

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

    Pattern(iValue);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5   Output : $   *   $   *   $   *   $   *   $   *
//  Input : 3   Output : $   *   $   *   $   *
//  Input : -3  Output : $   *   $   *   $   *
//  Input : 4   Output : $   *   $   *   $   *   $   *
//  Input : 0   Output : 
//
///////////////////////////////////////////////////////////////
