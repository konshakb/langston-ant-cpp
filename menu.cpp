
/***********************************
**  Author:  Bryan Konshak
**  Date:  10/8/2016
**  Description:  antDirection function menu to determine starting spot for ant
**************************************/
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <cstdlib>
#include <cctype>
#include <ctime>
#include <string>
#include "Ant.hpp"
#include "printBoard.hpp"
#include "antDirection.hpp"
#include "inputVal.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;

/*
string()
{
string menu;
do
{   //menu template
    cout << "(1) MENU OPTION 1! " << endl;
    cout << "(2) MENU OPTION 2! " << endl;
    cout << "(3) MENU OPTION 3! " << endl;
    cout << "(4) MENU OPTION 4! " << endl;
    cout << "Choose option 1, 2, 3, or 4: " << endl;
    cin >> menu;
    
    
}  while (menu != "1" && menu != "2" && menu != "3": or menu != "4");
    if (menu == "1")
    {
    }
}
*/
char antDirection(int& rowCount, int& colCount)//return char using the array size - 1 the parameters
{
    string menu;//menu string to determine picking or random
    int randomDir;
    string direction;//direction menu using returned
    char nsew;  //northsoutheastwest
    int row;
    int col;
    
    
    cout << "Do you want to pick the ant's starting position?" << endl;
    cout << "Or do you want the position to be random?" << endl;
do
{
    cout << "(1) Let me pick! " << endl;
    cout << "(2) You decide! " << endl;
    cout << "Choose option 1 or 2: " << endl;
    cin >> menu;
    
    
}  while (menu != "1" && menu != "2");//input validation for menu
    if (menu == "1")
    {
    
row = antRow(rowCount);//determine ant row
col = antCol(colCount);//user determines ant column
do
{
    cout << "What direction will the ant start?" << endl;
    cout << "(1) North" << endl;
    cout << "(2) South" << endl;
    cout << "(3) East" << endl;
    cout << "(4) West" << endl; 
    cout << "Choose option 1, 2, 3, or 4: " << endl;
    cin >> direction;
}while  (direction != "1" && direction != "2" && direction != "3" && direction != "4");
    if (direction == "1")//input validation, returning direction for Ant class parameter
        nsew = 'N';
    if (direction == "2")
        nsew = 'S';
    if (direction == "3")
        nsew = 'E';
    if (direction == "4")
        nsew = 'W';
    colCount = col;//update the reference parameters
    rowCount = row;//update the reference parameters
    }
    else if(menu=="2")//all random 
    {
        colCount = rand() %  colCount;//random colum location
        rowCount = rand() % rowCount;//random colum location
        randomDir = rand() % 4;
        if (randomDir == 0)
        {
            nsew = 'N';
        }
        if (randomDir == 1)
        {
            nsew = 'S';
        }
        if (randomDir == 2)
        {
            nsew = 'E';
        }
        if (randomDir == 3)
        {
            nsew = 'W';
        }
    }
   // colCount = col;
    //rowCount = row;
    return nsew;
        


}



