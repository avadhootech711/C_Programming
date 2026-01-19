///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////
//
//  Function Name : ChkZero
//  Description   : This function checks whether the given 
//                  number contains ZERO or not.
//  Input         : Integer
//  Output        : Boolean
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/11/2025
//
///////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }

    return FALSE;

}

//  TIME COMPLEXITY : O(N) -> N = Number till 0 is found

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :  10687     Output : It Contains Zero
//  Input :  9000      Output : It Contains Zero
//  Input :  2395      Output : There is no Zero
//  Input :  1018      Output : It Contains Zero
//  Input :  9999      Output : There is no Zero
//
///////////////////////////////////////////////////////////////