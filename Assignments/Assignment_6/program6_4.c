///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description   : This function accepts three numbers from the user 
//                  and returns their multiplication. 
//                  If any number is zero, the result is zero.
//  Input         : Integer, Integer, Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iResult;

    if (iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
    {
        iResult = 0;
    }
    else
    {
        iResult = iNo1 * iNo2 * iNo3;
    }

    return iResult;
    
}   // End of Multiply

//  TIME COMPLEXITY : O(1)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please Enter Three Numbers : ");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("Multiplication is: %d\n", iRet);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5 4 7          Output : 140
//  Input : 5 7 1          Output : 35
//  Input : 5 0 9          Output : 0
//  Input : -1 -10 -10     Output : -100
//  Input : 9 -9 -9        Output : 729
//
///////////////////////////////////////////////////////////////
