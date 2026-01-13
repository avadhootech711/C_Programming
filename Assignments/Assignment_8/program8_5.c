///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : TableRev
//  Input         : Integer
//  Output        : None(Void)
//  Description   : This function accepts a number from the user 
//                  and prints its table in reverse order 
//                  from 10th multiple to 1st multiple.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iNo * iCnt);
    }
    
    printf("\n");

}   // End of TableRev

//  TIME COMPLEXITY : O(n) where n = 10 (constant time)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5    Output : 50   45   40   35   30   25   20   15   10   5
//  Input : -3   Output : 30   27   24   21   18   15   12   9   6   3
//  Input : 7    Output : 70   63   56   49   42   35   28   21   14   7
//  Input : 10   Output : 100  90  80  70  60  50  40  30  20  10
//  Input : 0    Output : 0   0   0   0   0   0   0   0   0   0
//
///////////////////////////////////////////////////////////////