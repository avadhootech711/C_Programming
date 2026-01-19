///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Sum_Natural_Numbers
//  Description   : This function returns the sum of all natural
//                  numbers up to the given limit N.
//  Input         : Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

int Sum_Natural_Numbers(int iLimit)
{
    int iCnt = 0, iSum = 0;

    if (iLimit <= 0)
    {
        printf("Not a Natural Number");
    }
    

    for(iCnt = 1; iCnt <= iLimit; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;

}   // End of Sum_Natural_Numbers

//  TIME COMPLEXITY : O(N)

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

    if(iLimit > 0)
    {
        iRet = Sum_Natural_Numbers(iLimit);
        printf("%d\n", iRet);
    }
    else
    {
        Sum_Natural_Numbers(iLimit);
    }

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :  10       Output : 55
//  Input :   1       Output : 1
//  Input :   0       Output : Not a Natural Number
//  Input :  -3       Output : Not a Natural Number
//  Input :   5       Output : 15
//
///////////////////////////////////////////////////////////////
