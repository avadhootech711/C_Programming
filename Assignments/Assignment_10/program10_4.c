///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : FhtoCs
//  Input         : Float
//  Output        : Double
//  Description   : This function converts temperature from
//                  Fahrenheit to Celsius.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 29/10/2025
//
///////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dAns = 0.0;
    dAns = (fTemp - 32) * (5.0 / 9.0);

    return dAns;

}   // End of FhtoCs

//  TIME COMPLEXITY : O(1)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius : %lf", dRet);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 32       Output :  0
//  Input : 10       Output : -12.222222
//  Input : 34       Output :  1.111111
//  Input : 98.6     Output :  36.999999
//  Input : 212      Output :  100.00000
//
///////////////////////////////////////////////////////////////