
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

using std::cin;
using std::cout;
using std::endl;
using std::string;


char antDirection()
{
    string menu;
    int randomDir;
    char direction;
    
    cout << "Do you want to pick the ant's starting position?" << endl;
    cout << "Or do you want the position to be random?" << endl;
do
{
    cout << "(1) Let me pick! " << endl;
    cout << "(2) You decide! " << endl;
    cout << "Choose option 1 or 2: " << endl;
    cin >> menu;
    
    
}  while (menu != "1" && menu != "2");

    if(menu == "1")
    {
    do
    {
    cout << "What direction will the ant start?" << endl;
    cout << "(N)orth, (S)outh, (E)ast, or (W)est ? " << endl;
    cin >> direction;
    while(!cin)
    {
        cout << "Try again! " << endl;
        cin.clear();
        cin.ignore();
        cin >> direction;
    }
    } while (direction != 'N' && direction != 'S' && direction != 'E' && direction != 'W');
    }
    else if(menu=="2")
    {
        randomDir = rand() % 4;
        if (randomDir == 0)
        {
            direction = 'N';
        }
        if (randomDir == 1)
        {
            direction = 'S';
        }
        if (randomDir == 2)
        {
            direction = 'E';
        }
        if (randomDir == 3)
        {
            direction = 'W';
        }
    }
    return direction;
        


}



