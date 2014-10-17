//Tic Tac Toe AI
//Carson Miller

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const int RMAX = 3;
const int CMAX = 3;
const char empty = '-', me = 'X', you = 'O';

void printYourBoard(int yourBoard[9][2])
{
    for(int r=0; yourBoard[r][0] > 0; r++)
    {
        for(int c=0; c<2; c++)
        {
            cout << yourBoard[r][c] << "\t";
        }
        cout << endl;
    }
}

void scan(char board[RMAX][CMAX])
{
    int yourBoard[9][2];
    //initialize yourBoard to -1
    for(int r=0; r<9; r++)
    {
        for(int c=0; c<2; c++)
        {
            yourBoard[r][c] = -1;
        }
    }

    int cell = 0;
    for(int r=0; r<RMAX; r++)
    {
        for(int c=0; c<CMAX; c++)
        {
            if(board[r][c] = you)
            {
                yourBoard[cell][0] = r;h
                yourBoard[cell][1] = c;
                cell++;
            }
        }
    }

    printYourBoard(yourBoard);
}

int mustBlockDecide(char board[][CMAX])
{
}

void boardPrint(char board[RMAX][CMAX])
{
    for(int r=0; r<RMAX; r++)
    {
        for(int c=0; c<CMAX; c++)
        {
            cout << board[r][c] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    char board[RMAX][CMAX];
    for(int r=0; r<RMAX; r++)
    {
        for(int c=0; c<RMAX; c++)
        {
            board[r][c] = you;
        }
    }

    scan(board);

    //boardPrint(board);

   return 0;
}
