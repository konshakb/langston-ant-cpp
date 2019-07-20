
/***********************************
**  Author:  Bryan Konshak
**  Date:  10/8/2016
**  Description:  board funtion initializes the board
**************************************/
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include "Ant.hpp"
#include "printBoard.hpp"
#include "antDirection.hpp"
#include "board.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;





void board(char** board, int row, int col)
{
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)//create the 2d array of pointeres with char ' ' blank
            board[r][c] = ' ';
    }
    
}




