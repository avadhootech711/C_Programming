///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description   : Calculates percentage based on total and obtained marks
//  Input         : Float, Float
//  Output        : Float
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

float Percentage(float fTotalMarks, float fObtainedMarks)
{
    float fAns = 0.0f;

    if (fTotalMarks == 0)
    {
        printf("Total Marks cannot be zero\n");
        return 0.0f;
    }

    fAns = (fObtainedMarks / fTotalMarks) * 100;

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
    float fValue1 = 0.0f, fValue2 = 0.0f;
    float fRet = 0.0f;

    printf("Please enter total marks : ");
    scanf("%f", &fValue1);

    printf("Please enter obtained marks : ");
    scanf("%f", &fValue2);

    fRet = Percentage(fValue1, fValue2);

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
