///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : CountDiff
//  Description   : This function calculates the difference between
//                  sum of even digits and sum of odd digits in
//                  the given number.
//  Input         : Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0, iSumEven = 0, iSumOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iNo = iNo / 10;
    }

    return(iSumEven - iSumOdd);
}

// TIME COMPLEXITY : O(N) -> N = number of digits

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

    iRet = CountDiff(iValue);
    printf("Difference between even and odd summation is : %d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 2395        Output : Difference between even and odd summation is : -15
//  Input : 1018        Output : Difference between even and odd summation is :   6
//  Input : 8440        Output : Difference between even and odd summation is :  16
//  Input : 5733        Output : Difference between even and odd summation is : -18
//  Input : -2395       Output : Difference between even and odd summation is : -15
//
///////////////////////////////////////////////////////////////