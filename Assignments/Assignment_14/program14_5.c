///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : CountLessThanSix
//  Description   : This function counts how many digits
//                  in the given number are less than 6.
//  Input         : Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/11/2025
//
///////////////////////////////////////////////////////////////

int CountLessThanSix(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = CountLessThanSix(iValue);

    printf("Frequency of digits less than 6 is : %d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :  2395      Output : Frequency of digits less than 6 is : 3
//  Input :  96672     Output : Frequency of digits less than 6 is : 1
//  Input :  1018      Output : Frequency of digits less than 6 is : 3
//  Input :  9440      Output : Frequency of digits less than 6 is : 3
//  Input :  -4122     Output : Frequency of digits less than 6 is : 4
//
///////////////////////////////////////////////////////////////