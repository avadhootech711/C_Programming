///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : CheckGreater
//  Input         : Integer
//  Output        : Boolean
//  Description   : Checks whether the given number is 
//                  greater than 100 or not.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

bool CheckGreater(int iNo)
{
    if (iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}   // End of CheckGreater

//  TIME COMPLEXITY : O(1)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please Enter the Number : ");
    scanf("%d", &iValue);

    bRet = CheckGreater(iValue);

    if (bRet == true)
    {
        printf("Greater than 100");
    }
    else
    {
        printf("Smaller than 100");
    }

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 101    Output : Greater
//  Input : 39     Output : Smaller
//  Input : 100    Output : Smaller
//  Input : 150    Output : Greater
//  Input : -1001  Output : Smaller
//
///////////////////////////////////////////////////////////////