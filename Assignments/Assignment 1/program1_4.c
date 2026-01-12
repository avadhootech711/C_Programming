///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : It is used to check whether a given number is divisible by 5 or not
//  Input         : Integer
//  Output        : Boolean
//  Author        : Avadhoot Subhash Pawar
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if ((iNo % 5) == 0)                     // Business Logic
    {
        return true;
    }
    else
    {
        return false;
    }
    
}   // End of Check

///////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if (bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    
    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 15      Output : Divisible by 5
//  Input : 11      Output : Not Divisible by 5
//  Input : 0       Output : Divisible by 5
//  Input : 21      Output : Not Divisible by 5
//  Input : 20      Output : Divisible by 5
//
///////////////////////////////////////////////////////////////