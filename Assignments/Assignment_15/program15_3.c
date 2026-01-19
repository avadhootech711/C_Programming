///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : CountRange
//  Description   : This function counts how many digits in
//                  the given number are between 3 and 7.
//  Input         : Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit > 3 && iDigit < 7)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

// TIME COMPLEXITY : O(N) -> N = number of digits in input

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("Frequency of digits between 3 and 7 is : %d\n",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :   2395       Output : Frequency of digits between 3 and 7 is : 1
//  Input :   1018       Output : Frequency of digits between 3 and 7 is : 0
//  Input :   4521       Output : Frequency of digits between 3 and 7 is : 2
//  Input :   9922       Output : Frequency of digits between 3 and 7 is : 0
//  Input :   121212     Output : Frequency of digits between 3 and 7 is : 0
//
///////////////////////////////////////////////////////////////