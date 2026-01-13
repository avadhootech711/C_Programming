///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Print_Even_Numbers
//  Input         : Integer
//  Output        : Void
//  Description   : This function prints all even numbers from
//                  1 to the given number N.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

void Print_Even_Numbers(int iLimit)
{
    int iCnt = 0;

    if(iLimit <= 0)
    {
        printf("Invalid Input");
        return;
    }

    for(iCnt = 2; iCnt <= iLimit; iCnt += 2)
    {
        printf("%d\t", iCnt);
    }

}   // End of Print_Even_Numbers

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

    Print_Even_Numbers(iLimit);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10      Output : 2 4 6 8 10
//  Input : 7       Output : 2 4 6
//  Input : 2       Output : 2
//  Input : 1       Output : (no output)
//  Input : -5      Output : Invalid Input
//
///////////////////////////////////////////////////////////////