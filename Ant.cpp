
/***********************************
**  Author:  Bryan Konshak
**  Date:  10/08/2016
**  Description:  Ant class keeps track of direction of Langton's ant
**************************************/
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include "Ant.hpp"
#include "printBoard.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;



//char antDirection();
//void printBoard(char**, int, int);
//void board(char**, int, int);

//void antRight(char** antBoard, int& row, int& column, int& rowCount, int& colCount, char& antDir);
//  void ant()
//void antLeft(char** antBoard, int& row, int& column, int& rowCount, int& colCount, char& antDir);

Ant::Ant()
{
//constructor
}
//blank spaces, ant moves right
/******************
 *  void antRight function
 * *****************/
void Ant::antRight(char** antBoard, int& row, int& column, int& rowCount, int& colCount, char& antDir)
{
        if (antDir == 'N')//blank space and north
        {
            antBoard[row][column] = '*';//ant takes space

            if (column == (colCount-1))//far right column moves to far left
            {
                column = 0;
                printBoard(antBoard, rowCount, colCount);
                antBoard[row][(colCount-1)] = '#';//replace old square with #
                antDir = 'E';//change direction
            }

            else
            {
                column++;//ant moves right
            
                printBoard(antBoard, rowCount, colCount);//reprint board
                antBoard[row][column-1] = '#';//old space gets #
                antDir = 'E';
            }
        }
        else if (antDir == 'E')//face right
        {
            antBoard[row][column] = '*';//ant
            if (row == (rowCount-1))//bottom row moves to top
            {
                row = 0;
                printBoard(antBoard, rowCount, colCount);
                antBoard[(rowCount-1)][column] = '#';//old space gets #
                antDir = 'S';//change direction
            }
            else
            {
                row++;//move down one row
                printBoard(antBoard, rowCount, colCount);
                antBoard[row-1][column] = '#';//old space gets #
                antDir = 'S';//change direction to south
            }
        }   
        
        else if (antDir == 'S')
        {
            antBoard[row][column] = '*';
            if (column == 0)//facing south first column changes to last column
            {
                column = (colCount-1);
                printBoard(antBoard, rowCount, colCount);
                antBoard[row][0] = '#';//old space gets #
                antDir = 'W';//change direction
            }
            else
            {
                column--;//move left
                printBoard(antBoard, rowCount, colCount);
                antBoard[row][column +  1] = '#';//old space gets #
                antDir = 'W';
            }
        }
        else if (antDir == 'W')
        {
            antBoard[row][column] = '*';
            if (row == 0)//first row moves to last row instead of up
            {
                row = (rowCount-1);
                printBoard(antBoard, rowCount, colCount);
                antBoard[0][column] = '#';
                antDir = 'N';//change direction
            }
            else
            {
                row--;//move up one
                printBoard(antBoard, rowCount, colCount);
                antBoard[row+1][column ] = '#';
                antDir = 'N';//change direction
            }
        }
}
   /*********
    * void antLeft function
    *
    *
    * *******/     
void Ant::antLeft(char** antBoard, int& row, int& column, int& rowCount, int& colCount, char& antDir)
{
        if (antDir == 'N')
        {
            antBoard[row][column] = '*';
            if (column == 0)//first column moves to last column
           {
                column = (colCount-1);
                printBoard(antBoard, rowCount, colCount);
                antBoard[row][(0)] = ' ';//blank space in old spot
                antDir = 'W';//new direction
            }
            else
            {
                column--;//move left
                printBoard(antBoard, rowCount, colCount);
                antBoard[row][column+1 ] = ' ';//old spot gets blank
                antDir = 'W';//new direction
            }
        }
        else if (antDir == 'W')
        {
            antBoard[row][column] = '*';
            if (row == (rowCount-1))//last row moves to first row
            {
                row = 0;
                printBoard(antBoard, rowCount, colCount);
                antBoard[(rowCount-1)][column] = ' ';//blank
                antDir = 'S';
            }
            else
            {
                row++;//move down
                printBoard(antBoard, rowCount, colCount);
                antBoard[row-1][column ] = ' ';//replace old with blank
                antDir = 'S';
            }
        }
        else if (antDir == 'S')
        {
            antBoard[row][column] = '*';
            if (column == (colCount-1))
            {
                column = 0;//  face south move east last col moves to first
                printBoard(antBoard, rowCount, colCount);
                antBoard[row][(colCount-1)] = ' ';//blank space
                antDir = 'E';
            }
            else
            {
                column++;//move right
                printBoard(antBoard, rowCount, colCount);
                antBoard[row][column-1 ] = ' ';
                antDir = 'E';
            }
        }
        
        else if (antDir == 'E')
        {
            antBoard[row][column] = '*';
            if (row == 0)//facing east first row switch to last row
            {
                row = (rowCount-1);
                printBoard(antBoard, rowCount, colCount);
                antBoard[0][column] = ' ';//old space gets blank
                antDir = 'N';
            }
            else
            {
                row--;//down
                printBoard(antBoard, rowCount, colCount);
                antBoard[row+1][column ] = ' ';
                antDir = 'N';
            }
        }
}
//setter function
void Ant::setAntBoard(char** antBoardIn)
{
    antBoard = antBoardIn;
}
void Ant::setRow(int rowIn)
{
    row = rowIn;
}
void Ant::setColumn(int columnIn)
{
    column = columnIn;
}
void Ant::setRowCount(int rowCountIn)
{
    rowCount = rowCountIn;
}
void Ant::setColCount(int colCountIn)
{
    colCount = colCountIn;
}
void Ant::setAntDir(char antDirIn)
{
    antDir = antDirIn;
}







































