///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name  : DisplayConvert
//  Input          : Character
//  Output         : None(Void)
//  Description    : It accepts one character from the user and 
//                   converts it to its opposite case. 
//                   If the character is uppercase, it is converted 
//                   to lowercase, and vice versa.
//  Author         : Avadhoot Subhash Pawar
//  Date           : 03/11/2025
//
///////////////////////////////////////////////////////////////

void DisplayConvert(char cValue1)
{
    if(cValue1 >= 'a' && cValue1 <= 'z')                    // Business Logic
    {
        printf("%c", cValue1 - 32);
    }
    else if(cValue1 >= 'A' && cValue1 <= 'Z')
    {
        printf("%c", cValue1 + 32);
    }
    else
    {
        printf("Invalid character");
    }

}   // End of DisplayConvert

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter a character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);
    
    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : P        Output : p
//  Input : i        Output : I
//  Input : y        Output : Y
//  Input : u        Output : U
//  Input : s        Output : S
//  Input : H        Output : h
//
///////////////////////////////////////////////////////////////
