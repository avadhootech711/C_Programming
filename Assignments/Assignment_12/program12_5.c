///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Is_Divisible_by_Five
//  Input         : Integer
//  Output        : Boolean
//  Description   : This function checks whether the given number
//                  is divisible by 5 or not.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 30/10/2025
//
///////////////////////////////////////////////////////////////

bool Is_Divisible_by_Five(int iNumber)
{
    return ((iNumber % 5) == 0);

}   // End of Is_Divisible_by_Five

//  TIME COMPLEXITY : O(1)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iNumber;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d", &iNumber);
    
    bRet = Is_Divisible_by_Five(iNumber);
    
    if(bRet == true)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");
    }

    return 0;
}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input :  25      Output : Yes
//  Input :  13      Output : No
//  Input :   0      Output : Yes
//  Input : -10      Output : Yes
//  Input : 200      Output : Yes
//
///////////////////////////////////////////////////////////////