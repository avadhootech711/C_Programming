///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : RectArea
//  Description   : This function accepts width and height of a rectangle 
//                  and returns its area using the formula 
//                  Area = Width × Height.
//  Input         : Float, Float
//  Output        : Double
//  Author        : Avadhoot Subhash Pawar
//  Date          : 29/10/2025
//
///////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    if (fWidth < 0)
    {
        fWidth = -fWidth;
    }

    if (fHeight < 0)
    {
        fHeight = -fHeight;
    }

    dArea = (double)fWidth * fHeight;

    return dArea;

}   // End of RectArea

//  TIME COMPLEXITY : O(1)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f", &fValue1);

    printf("Enter Height : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is : %lf", dRet);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 5      Input2 : 10       Output : 50.0000
//  Input1 : 3.2    Input2 : 4.5      Output : 14.4000
//  Input1 : -4     Input2 : 7        Output : 28.0000
//  Input1 : 0      Input2 : 10       Output : 0.00
//  Input1 : 5.3    Input2 : 9.78     Output : 51.8340
//
///////////////////////////////////////////////////////////////
