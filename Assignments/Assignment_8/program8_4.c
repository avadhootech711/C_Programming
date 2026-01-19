///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Table
//  Description   : This function accepts a number from the user
//                  and prints its table up to 10 multiples.
//  Input         : Integer
//  Output        : None(Void)
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
    
    printf("\n");

}   // End of Table

//  TIME COMPLEXITY : O(n) where n = 10

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

    Table(iValue);

    return 0;

}   // End of main


///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5    Output : 5   10   15   20   25   30   35   40   45   50
//  Input : -3   Output : 3   6   9   12   15   18   21   24   27   30
//  Input : 7    Output : 7   14   21   28   35   42   49   56   63   70
//  Input : 10   Output : 10  20  30  40  50  60  70  80  90  100
//  Input : 0    Output : 0   0   0   0   0   0   0   0   0   0
//
///////////////////////////////////////////////////////////////
