///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Print_Numbers
//  Input         : Integer
//  Output        : Void
//  Description   : This function prints numbers from 1 to N.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

void Print_Numbers(int iLimit)
{
    int iCnt = 0;

    if (iLimit <= 0)
    {
        printf("Invalid Input");
    }
    

    for(iCnt = 1; iCnt <= iLimit; iCnt++)
    {
        printf("%d\t", iCnt);
    }

}   // End of Print_Numbers

//  TIME COMPLEXITY : O(N)

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

    Print_Numbers(iLimit);
    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :  5        Output : 1 2 3 4 5
//  Input :  1        Output : 1
//  Input :  10       Output : 1 2 3 4 5 6 7 8 9 10
//  Input :  -4       Output : Invalid Input
//  Input :  11       Output : 1 2 3 4 5 6 7 8 9 10 11
//
///////////////////////////////////////////////////////////////