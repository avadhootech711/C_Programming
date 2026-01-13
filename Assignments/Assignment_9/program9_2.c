///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : DollarToINR
//  Input         : Integer
//  Output        : Integer
//  Description   : This function accepts amount in US Dollars 
//                  and returns its corresponding value in 
//                  Indian Rupees. (1 USD = 70 INR)
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iINR = 0;

    if (iNo < 0)
    {
        printf("WARNING : Currency cannot be NEGATIVE");
    }

    iINR = iNo * 70;

    return iINR;

}   // End of DollarToINR

//  TIME COMPLEXITY : O(1)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10    Output : Value in INR is : 700
//  Input : 3     Output : Value in INR is : 210
//  Input : -5    Output : WARNING : Currency cannot be NEGATIVE
//  Input : 0     Output : Value in INR is : 0
//  Input : 1     Output : Value in INR is : 70
//
///////////////////////////////////////////////////////////////