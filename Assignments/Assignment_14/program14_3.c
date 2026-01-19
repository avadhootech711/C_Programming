///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : CountTwo
//  Description   : This function counts how many times
//                  digit 2 occurs in the given number.
//  Input         : Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/11/2025
//
///////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("Frequency of 2 is : %d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :  2395      Output : Frequency of 2 is : 1
//  Input :  922432    Output : Frequency of 2 is : 3
//  Input :  1018      Output : Frequency of 2 is : 0
//  Input :  9000      Output : Frequency of 2 is : 0
//  Input :  -2122     Output : Frequency of 2 is : 3
//
///////////////////////////////////////////////////////////////