///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name  : Display
//  Description    : It accepts one integer from user.
//                   If number is less than 10, it prints "Hello",
//                   otherwise it prints "Demo".
//  Input          : Integer
//  Output         : None(Void)
//  Author         : Avadhoot Subhash Pawar
//  Date           : 27/10/2025
//
///////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if (iNo < 10)                       // Business Logic
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
    
}   // End of Display

///////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10      Output : Hello
//  Input : 11      Output : Demo
//  Input : 0       Output : Hello
//  Input : -2      Output : Hello
//  Input : 121     Output : Demo
//
///////////////////////////////////////////////////////////////
