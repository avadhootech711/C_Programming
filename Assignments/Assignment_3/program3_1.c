///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name  : PrintEven
//  Description    : It accepts one integer from the user and
//                   prints that number of even numbers on screen.
//  Input          : Integer
//  Output         : None(Void)
//  Author         : Avadhoot Subhash Pawar
//  Date           : 27/10/2025
//
///////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)                                       // Business Logic
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }
    
}   // End of PrintEven

///////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : -1        Output : 2
//  Input : 3         Output : 2 4 6
//  Input : 5         Output : 2 4 6 8 10
//  Input : 7         Output : 2 4 6 8 10 12 14
//  Input : 0         Output : 
//
///////////////////////////////////////////////////////////////
