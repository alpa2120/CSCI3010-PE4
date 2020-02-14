#include <iostream>
#include <vector>
#include <string>
using namespace std;

/**
 * Create a 3x3 multidimentional array to act as a board
 * 
 * @return The new board array
 */
string** CreateBoard()
{
    string** new_board = new string*[3];

    for (int i = 0; i < 3; i ++)
    {
        new_board[i] = new string[3];
    }

    return new_board;
}

void DisplayBoard(string** board)
{
    for (int i = 0; i < 3; i ++){
        for (int j = 0; j < 3; j ++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
}

int main()
{
    string** board = CreateBoard();
    DisplayBoard(board);

    return 0;
}