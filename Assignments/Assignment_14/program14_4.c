///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : CountFour
//  Description   : This function counts how many times
//                  digit 4 occurs in the given number.
//  Input         : Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/11/2025
//
///////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    
    return iCount;
}

// TIME COMPLEXITY : O(N) -> N = Number of digits in input

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

    iRet = CountFour(iValue);

    printf("Frequency of 4 is : %d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :  2395      Output : Frequency of 4 is : 0
//  Input :  922432    Output : Frequency of 4 is : 1
//  Input :  1018      Output : Frequency of 4 is : 0
//  Input :  9440      Output : Frequency of 4 is : 2
//  Input :  -4122     Output : Frequency of 4 is : 1
//
///////////////////////////////////////////////////////////////