
/***********************************
**  Author:  Bryan Konshak
**  Date:  10/8/2016
**  Description:  printBoard function to screen
**************************************/
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include "printBoard.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;



 
//2d ARRAY WITH ROWCOUNT AND COLLUMN ACCOUNT AS PARAMETERS
void printBoard(char** board, int rowCount, int colCount)
{

    
                for (int r = 0; r < rowCount; r++)//row
                {
                    for (int c = 0; c < colCount; c++)//column
                    {
                        cout << board[r][c] << " " ;//fill with blank spaces
                    }
                    cout << endl;
                }
}
