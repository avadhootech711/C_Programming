///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name  : DisplayEvenFactor
//  Input          : Integer
//  Output         : None(Void)
//  Description    : It accepts one integer from the user and 
//                   displays all its even factors on the screen.
//  Author         : Avadhoot Subhash Pawar
//  Date           : 27/10/2025
//
///////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)                                // Business Logic
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            if(iCnt % 2 == 0)
            {
                printf("%d\t", iCnt);
            }
        }
    }

}   // End of DisplayEvenFactor

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

    DisplayEvenFactor(iValue);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 24        Output : 2 4 6 8 12
//  Input : 10        Output : 2
//  Input : -100      Output : 2 4 10 20 50
//  Input : -45       Output : 
//  Input : 11        Output : 
//
///////////////////////////////////////////////////////////////