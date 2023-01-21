#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char table[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int choice, row, col;
string p1, p2;
char turn = 'X';
bool draw = false;

void display_table()
{
    cout << p1 << " [X]\t&\t" << p2 << " [O]\n\n";
    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << table[0][0] << "  |  " << table[0][1] << "  |  " << table[0][2] << endl;
    cout << "\t\t_____|_____|_____" << endl;
    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << table[1][0] << "  |  " << table[1][1] << "  |  " << table[1][2] << endl;
    cout << "\t\t_____|_____|_____" << endl;
    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << table[2][0] << "  |  " << table[2][1] << "  |  " << table[2][2] << endl;
    cout << "\t\t     |     |     " << endl;
}

void player_turn()
{
    if (turn == 'X')
    {
        cout << "\n\t" << p1 << " [X] turn : ";
        cin >> choice;
    }
    else if (turn == 'O')
    {
        cout << "\n\t" << p1 << " [O] turn : ";
        cin >> choice;
    }

    switch (choice)
    {
    case 1:  row = 0;  col = 0;  break;
    case 2:  row = 0;  col = 1;  break;
    case 3:  row = 0;  col = 2;  break;
    case 4:  row = 1;  col = 0;  break;
    case 5:  row = 1;  col = 1;  break;
    case 6:  row = 1;  col = 2;  break;
    case 7:  row = 2;  col = 0;  break;
    case 8:  row = 2;  col = 1;  break;
    case 9:  row = 2;  col = 2;  break;
    default: cout << "Invalid Move!";
    }

    if (turn == 'X' && table[row][col] != 'X' && table[row][col] != 'O')
    {
        table[row][col] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && table[row][col] != 'X' && table[row][col] != 'O')
    {
        table[row][col] = 'O';
        turn = 'X';
    }
    else
    {
        cout << "Box already chosen!" << endl;
        player_turn();
    }
    display_table();
}

bool gameon()
{
    for (int i = 0; i < 3; i++)
    {
        if (table[i][0] == table[i][1] && table[i][0] == table[i][2] || table[0][i] == table[1][i] && table[0][i] == table[2][i])
        {
            return false;
        }
    }
    if (table[0][0] == table[1][1] && table[0][0] == table[2][2] || table[0][2] == table[1][1] && table[0][2] == table[2][0])
    {
        return false;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (table[i][j] != 'X' && table[i][j] != 'O')
            {
                return true;
            }
        }
    }
    draw = true;
    return false;
}

int main()
{
    cout << "\n\t\t Welcome to the TICK-TACK-TOE game!";
    cout << "\n\tLet's play [X] v/s [O]";
    cout << "\n\tEnter name of Player - 1 [X] -> ";
    cin >> p1;
    cout << "\n\tEnter name of Player - 2 [O] -> ";
    cin >> p2;
    while (gameon())
    {
        display_table();
        player_turn();
    }
    if (turn == 'O' && draw == false)
    {
        cout << "\n\nCongratulations! " << p1 << " with [X] won the game!!" << endl;
    }
    else if (turn == 'X' && draw == false)
    {
        cout << "\n\nCongratulations! " << p2 << " with [O] won the game!!" << endl;
    }
    else
    {
        cout << "\n\nThis game was a draw!";
    }
}
