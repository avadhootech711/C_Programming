///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : DisplayName
//  Description   : It accepts a full name from the user and 
//                  displays it on the screen.
//  Input         : None(String)
//  Output        : None(Void)
//  Author        : Avadhoot Subhash Pawar
//  Date          : 28/10/2025
//
///////////////////////////////////////////////////////////////

void DisplayName()
{
    char cName[30];

    printf("Please enter full name: ");
    scanf(" %[^\n]", cName);

    printf("Your name is %s", cName);

}   // End of DisplayName

// TIME COMPLEXITY : O(n)

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    DisplayName();

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : Piyush Khairnar     Output : Your name is Piyush Khairnar
//  Input : Avadhoot Pawar      Output : Your name is Avadhoot Pawar
//  Input : Rohit Sharma        Output : Your name is Rohit Sharma
//  Input : Virat Kohli         Output : Your name is Virat Kohli
//  Input : Ajit Pawar          Output : Your name is Ajit Pawar
//
///////////////////////////////////////////////////////////////
