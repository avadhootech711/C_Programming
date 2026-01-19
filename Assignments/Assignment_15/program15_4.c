///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : MultDigits
//  Description   : This function multiplies all digits of the
//                  given number and returns the product.
//  Input         : Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;                              /* For Ignore Zeros : if(iDigit != 0)*/
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    
    return iMult;
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

    iRet = MultDigits(iValue);

    printf("Product of digits is : %d\n",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :  2395       Output : Product of digits is : 270
//  Input :  1018       Output : Product of digits is : 0
//  Input :  9440       Output : Product of digits is : 0
//  Input :  922432     Output : Product of digits is : 24
//  Input :  -22        Output : Product of digits is : 4
//
///////////////////////////////////////////////////////////////