///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description   : This function counts how many even digits 
//                  are present in the given number.
//  Input         : Integer
//  Output        : Integer
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
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

    iRet = CountEven(iValue);
    printf("Frequency of even digits is : %d\n",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :   2395       Output : Frequency of even digits is : 1
//  Input :   1018       Output : Frequency of even digits is : 2
//  Input :  -1018       Output : Frequency of even digits is : 2
//  Input :   8462       Output : Frequency of even digits is : 4
//  Input :   222222     Output : Frequency of even digits is : 6
//
///////////////////////////////////////////////////////////////