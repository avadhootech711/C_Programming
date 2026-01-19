///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumberType
//  Description   : It accepts an integer from the user and 
//                  displays whether the number is positive, 
//                  negative, or zero
//  Input         : Integer
//  Output        : None(Void)
//  Author        : Avadhoot Subhash Pawar
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////

void CheckNumberType(int iNum)
{
    if(iNum > 0)                                               // Business Logic
    {
        printf("Number is Positive\n");
    }

    else if(iNum < 0)
    {
        printf("Number is Negative\n");
    }

    else
    {
        printf("Number is Zero\n");
    }

}   // End of CheckNumberType

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iNumber;

    printf("Enter Number : ");
    scanf("%d",&iNumber);

    CheckNumberType(iNumber);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 11     Output : Number is Positive
//  Input : 10     Output : Number is Positive
//  Input : -19    Output : Number is Negative
//  Input : 0      Output : Number is Zero
//  Input : -1     Output : Number is Negative
//
///////////////////////////////////////////////////////////////
