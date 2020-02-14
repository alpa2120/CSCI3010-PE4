#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Create a 3x3 multidimensional array to act as a board
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

/**
 * Display the 3x3 multidimensional array to the user
 * Input is the 3x3 board to display

 **/

void DisplayBoard(string** board)
{
    cout<<"The current board is: "<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

int GetPlayerChoice()
{
    string index;
    cout<<"Please enter the index you would like to mark (0-8): "<<endl;
    getline(cin,index);
    cout<<"You entered "<<index<<" as your choice"<<endl;
    
    return stoi(index);

}

int main()
{
    string** board = CreateBoard();
    DisplayBoard(board);
    int square = GetPlayerChoice();

    return 0;
}