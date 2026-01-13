///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Print_Odd_Numbers
//  Input         : Integer
//  Output        : Void
//  Description   : This function displays all odd numbers
//                  between 1 and the given number N.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

void Print_Odd_Numbers(int iLimit)
{
    int iCnt;

    if(iLimit <= 0)
    {
        printf("Invalid Input");
        return;
    }

    for(iCnt = 1; iCnt <= iLimit; iCnt += 2)
    {
        printf("%d\t",iCnt);
    }

}   // End of Print_Odd_Numbers

//  TIME COMPLEXITY : O(N/2)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iLimit;

    printf("Enter Number : ");
    scanf("%d", &iLimit);

    Print_Odd_Numbers(iLimit);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10      Output : 1 3 5 7 9
//  Input : 7       Output : 1 3 5 7
//  Input : 2       Output : 1
//  Input : 1       Output : 1
//  Input : -5      Output : Invalid Input
//
///////////////////////////////////////////////////////////////