///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description   : This function accepts an integer and prints
//                  its digits in reverse order.
//  Input         : Integer
//  Output        : Void
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/11/2025
//
///////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);

        iNo = iNo / 10;
    }
}

//  TIME COMPLEXITY : O(N) -> N = Number of Digits

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 2395       Output : 5 9 3 2
//  Input : 1018       Output : 8 1 0 1
//  Input : -1018      Output : 8 1 0 1
//  Input : 9000       Output : 0 0 0 9
//  Input : 1110       Output : 0 1 1 1
//
///////////////////////////////////////////////////////////////