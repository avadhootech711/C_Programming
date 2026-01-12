///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name  : DisplayFactor
//  Input          : Integer
//  Output         : None(Void)
//  Description    : It accepts one integer from the user and 
//                   displays all its factors on the screen.
//  Author         : Avadhoot Subhash Pawar
//  Date           : 27/10/2025
//
///////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)                               // Business Logic
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
    
}   // End of DisplayFactor

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

    DisplayFactor(iValue);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 24        Output : 1 2 3 4 6 8 12
//  Input : 10        Output : 1 2 5
//  Input : -18       Output : 1 2 3 6 9
//  Input : -45       Output : 1 3 5 9 15
//  Input : 0         Output : 
//
///////////////////////////////////////////////////////////////