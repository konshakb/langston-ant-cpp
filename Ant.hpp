
/***********************************
**  Author:  Bryan Konshak
**  Date:  10/6/2016
**  Description:  Ant class header file
**************************************/

#ifndef ANT_HPP
#define ANT_HPP

//
class Ant
{
private:
    char** antBoard;
    int row;
    int column;
    int rowCount;
    int colCount;
    char antDir;

public:
    Ant();
    void antLeft(char**, int&, int&, int&, int&, char&);
    void antRight(char**, int&, int&, int&, int&, char&);
    void setAntBoard(char**);
    void setRow(int);
    void setColumn(int);
    void setRowCount(int);
    void setColCount(int);
    void setAntDir(char);

};

#endif
    
