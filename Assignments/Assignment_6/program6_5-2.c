///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Input         : Integer, Integer
//  Output        : Float
//  Description   : Calculates percentage based on total and obtained marks
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

float Percentage(int iTotalMarks, int iObtainedMarks)
{
    float fAns = 0.0f;

    if (iTotalMarks == 0)
    {
        printf("Total Marks cannot be zero\n");
        return 0.0f;
    }

    fAns = ((float)iObtainedMarks / (float)iTotalMarks) * 100;

    return fAns;

}   // End of Percentage

//  TIME COMPLEXITY : O(1)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks : ");
    scanf("%f", &iValue1);

    printf("Please enter obtained marks : ");
    scanf("%f", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is %f %%\n", fRet);

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 500     Input2 : 345      Output : 69.00 %
//  Input1 : 1000    Input2 : 745      Output : 74.50 %
//  Input1 : 600     Input2 : 600      Output : 100.00 %
//  Input1 : 800     Input2 : 0        Output : 0.00 %
//  Input1 : 50      Input2 : 25       Output : 50.00 %
//
/////////////////////////////////////////////////////////////////////