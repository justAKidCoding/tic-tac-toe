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
    int indexBoard[9][3];
    int row = 0;
    //initializes indexBoard to the default board (all spaces empty)
    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            indexBoard[row][0] = r;
            indexBoard[row][1] = c;
            indexBoard[row][2] = 0;
            row++;
        }
    }

    for(int r=0; r<RMAX; r++)
    {
        for(int c=0; c<CMAX; c++)
        {
            if(board[r][c] == you)
            {
                indexBoard[(r*3) + c][2] = 2; //if cell[r][c] is filled with opponent character, indicate that in the indexBoard
            }

            if(board[r][c] == me)
            {
                indexBoard[(r*3) + c][2] = 0; //if cell[r][c] is filled with my character, indicate that in the indexBoard
            }
        }
    }

    for(int n=0; n<3; n++)  //test print statement for a single line of index board
    {
        cout << indexBoard[8][n] << "\t";
        if(n==2) cout << endl;
    }
    //printYourBoard(indexBoard);
}

void mustBlockDecide(int yourBoard[9][2])
{

}
void boardPrint(char board[RMAX][CMAX])
{
    cout << "The current board is:\n";
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

    boardPrint(board);

   return 0;
}
