
/***********************************
**  Author:  Bryan Konshak
**  Date:  10/8/2016
**  Description:  main.cpp for Langton's ant
**************************************/
#include <iostream>
//#include <stdio.h>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include "Ant.hpp"
#include "printBoard.hpp"
//#include "antDirection.hpp"
#include "board.hpp"
#include "menu.hpp"
#include "inputVal.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;




int main()

{
    unsigned seed;
    seed = time(0);
    srand(seed);
    int row, column;
    
    int rowCount=50, colCount; // variables to build array board

    cout << "\n\n\n\n\nHello world!!!  Today we will create Langton's Ant. " << endl;
    cout << "You can create the board size, but I suggest a 45 X 70 board.\n " << endl;

    rowCount = inputVal();//function to get the row and column  for 2d array board
    colCount = inputCol();

    char** antBoard = new char*[rowCount];//build the 2d array
    for(int i= 0; i < rowCount; i++ )
        antBoard[i] = new char[colCount];
    
    board(antBoard, rowCount, colCount);//create an empty board
    int turns = inputTurns();
    


    row = rowCount-1;//otherwise segmentation error
    column = colCount-1;
    char antDir = antDirection(row, column);
    Ant tracker;//create the Ant object
    
    cout << "\n\n\n" << endl;
    for (int t= 0; t < turns+1; t++)
    {
        usleep(105000);  //refresh rate
        cout << "\33[2J\033[1;1H" << endl;//refresh the screen
        if (antBoard[row][column] == ' ')//if black space, run Ant function antRight
        {
            tracker.antRight(antBoard, row, column, rowCount, colCount, antDir);
        }
        else if (antBoard[row][column] == '#')//if # run antLeft
        {
            tracker.antLeft(antBoard, row, column, rowCount, colCount, antDir);
        }
        
        
    }
    cout << "\n\n\n" << endl;
    for (int i = 0; i < rowCount; i++)
    {
        delete [] antBoard[i];
    }
    delete [] antBoard;  //clean up dynamically allocated memory
    
    
    return 0;
}
