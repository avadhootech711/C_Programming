///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Input         : Float
//  Output        : Double
//  Description   : This function accepts radius from the user 
//                  and returns the area of a circle using the formula 
//                  Area = π * r².
//  Author        : Avadhoot Subhash Pawar
//  Date          : 29/10/2025
//
///////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }

    dArea = 3.14 * fRadius * fRadius;
    return dArea;

}   // End of CircleArea

//  TIME COMPLEXITY : O(1)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %lf", dRet);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5       Output : 78.5000
//  Input : 5.3     Output : 88.2026
//  Input : 10.4    Output : 339.6224
//  Input : 0       Output : 0.00
//  Input : -1      Output : 3.1400
//
///////////////////////////////////////////////////////////////