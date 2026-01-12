///////////////////////////////////////////////////////////////
//
//  Required Header Files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Input         : Integer, Integer, Integer
//  Output        : Integer
//  Description   : It accepts three numbers from the user 
//                  and returns the largest number among them.
//  Author        : Avadhoot Subhash Pawar
//  Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////

int FindLargest(int iNum1, int iNum2, int iNum3)
{
     if((iNum1 >= iNum2) && (iNum1 >= iNum3))                          // Business logic
    {
        return iNum1;
    }
    else if((iNum2 >= iNum1) && (iNum2 >= iNum3))
    {
        return iNum2;
    }
    else
    {
        return iNum3;
    }
    
}   // End of FindLargest

///////////////////////////////////////////////////////////////
//
//  Entry point function of application
//
///////////////////////////////////////////////////////////////

int main()
{
    
    int iNo1, iNo2, iNo3, iResult;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iNo1, &iNo2, &iNo3);

    iResult = FindLargest(iNo1, iNo2, iNo3);

    printf("Largest number is: %d\n", iResult);

    return 0;

}   // End of main

///////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 10 20 30    Output : Largest number is: 30
//
//  Input : 5 15 10     Output : Largest number is: 15
//
//  Input : 25 25 10    Output : Largest number is: 25
//
//  Input : -5 -2 -8    Output : Largest number is: 25
//
//  Input : 100 50 100  Output : Largest number is: 100
//
///////////////////////////////////////////////////////////////