

/***********************************
**  Author:  Bryan Konshak
**  Date:  10/8/2016
**  Description:  input validation for Langton's ant
**************************************/
#include <iostream>
//#include <stdio.h>
//#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include "Ant.hpp"
#include "printBoard.hpp"
#include "antDirection.hpp"
#include "board.hpp"
#include "inputVal.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;
/*
int inputvalidation()

int inputVal()   FUNCTION PROTOTYPE FOR INPUT VALIDATION
{
    int input;
    while (cout  << "Ask user for the input"  && !(cin >> rowCount ) || input  < lowerlimitrange || input > upper limit)
    {
        
            cout << "That's not a number between lower and upper; " << endl;
            cin.clear();
            cin.ignore(1000, '\n');
    }
    return input;
}
 * */

int inputVal()//returns int for number of rows of grid
{
    int rowCount;
    while (cout  << "How many rows?  Select a number between 3 and 45: "  && !(cin >> rowCount ) || rowCount < 3 || rowCount > 45)
        //  if user inputs int outside of range or a word, loops and asks again
    {
        
            cout << "That's not a number between 3 and 45; " << endl;
            cin.clear();//clear bad input
            cin.ignore(1000, '\n');//ignore till next line
    }
    return rowCount;
}
    
int inputCol()
{
    int colCount;
    while (cout  << "How many columns? Select a number between 3 and 70: "  && !(cin >> colCount ) || colCount < 4 || colCount > 70)
    {
        
            cout << "That's not a number between 3 and 70; " << endl;
            cin.clear();
            cin.ignore(1000, '\n');
    }
    return colCount;
}

int antRow(int rowCount)
{
    int row;
    while ((cout  << "What row do you want the ant to start on?  You can pick a number beween 0 and " <<(rowCount)<<  " ") && !(cin >> row ) || row < 0 || row>rowCount)
    {
        
            cout << "That's not a number between 0 and " << (rowCount) << ". " << endl;
            cin.clear();
            cin.ignore(1000, '\n');
    }
    return row;
}

int antCol(int colCount)
{
    int col;
    while ((cout  << "What column do you want the ant to start on?  You can pick a number beween 0 and " <<(colCount)<<  " ") && !(cin >> col ) || col < 0 || col>colCount)
    {
        
            cout << "That's not a number between 0 and " << (colCount) << ". " << endl;
            cin.clear();
            cin.ignore(1000, '\n');
    }
    return col;
}

int inputTurns()  
{
    int input;
    while (cout  << "How many turns?  You could do 100, 500, 10000!  You pick: "  && !(cin >> input ) || input  < 1 || input > 100000)
    {
        
            cout << "That's not a number above zero; " << endl;
            cin.clear();
            cin.ignore(1000, '\n');
    }
    return input;
}
 








