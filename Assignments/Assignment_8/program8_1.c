///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Number
//  Description   : This function accepts a number from the user 
//                  and prints "Small" if the number is less than 50,
//                  "Medium" if it is between 50 and 100,
//                  and "Large" if it is greater than 100.
//  Input         : Integer
//  Output        : None(Void)
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small\n");
        return;
    }

    else if (iNo >= 50 && iNo <= 100)
    {
        printf("Medium\n");
        return;
    }

    else
    {
        printf("Large\n");
        return;
    }

}   // End of Number

//  TIME COMPLEXITY : O(1)

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

    Number(iValue);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 75    Output : Medium
//  Input : 20    Output : Small
//  Input : 120   Output : Large
//  Input : 50    Output : Medium
//  Input : 100   Output : Medium
//
///////////////////////////////////////////////////////////////
