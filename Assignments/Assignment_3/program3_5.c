///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////
//
//  Function Name  : ChkVowel
//  Description    : It accepts one character from the user and 
//                   returns TRUE if the character is a vowel 
//                   otherwise returns FALSE.
//  Input          : Character
//  Output         : Boolean
//  Author         : Avadhoot Subhash Pawar
//  Date           : 27/10/2025
//
///////////////////////////////////////////////////////////////

BOOL ChkVowel(char cValue)
{
    if (cValue == 'A' || cValue == 'E' || cValue == 'I' ||
        cValue == 'O' || cValue == 'U' || 
        cValue == 'a' || cValue == 'e' || cValue == 'i' || 
        cValue == 'o' || cValue == 'u')                                         // Business Logic
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}   // End of ChkVowel

///////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character : ");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : A        Output : It is Vowel
//  Input : e        Output : It is Vowel
//  Input : I        Output : It is Vowel
//  Input : o        Output : It is Vowel
//  Input : u        Output : It is Vowel
//  Input : K        Output : It is not Vowel
//  Input : b        Output : It is not Vowel
//
///////////////////////////////////////////////////////////////
