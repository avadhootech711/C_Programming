///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Sum_Even_Numbers
//  Input         : Integer
//  Output        : Integer
//  Description   : This function returns the sum of all even
//                  numbers between 1 and the given limit N
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

int Sum_Even_Numbers(int iLimit)
{
    int iCnt = 0, iSum = 0;
    
    if(iLimit <= 0)
    {
        printf("Not a Natural Number");
    }

    for (iCnt = 2; iCnt <= iLimit; iCnt += 2)
    {
        iSum = iSum + iCnt;
    }
    
    return iSum;

}   // End of Sum_Even_Numbers

//  TIME COMPLEXITY : O(N/2)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iLimit = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iLimit);

    if (iLimit > 0)
    {
        iRet = Sum_Even_Numbers(iLimit);
        printf("%d\n", iRet);
    }
    else
    {
        Sum_Even_Numbers(iLimit);
    }

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :  10       Output : 30
//  Input :  1        Output : 0
//  Input :  12       Output : 42
//  Input :  -5       Output : Not a natural number
//  Input :  20       Output : 110
//
///////////////////////////////////////////////////////////////