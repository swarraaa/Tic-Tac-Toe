#include <bits/stdc++.h>
char ROCK = 'r';
char PAPER = 'p';
char SCISSORS = 's';
using namespace std;

int main()
{
    int choice=1;
    cout << "-------------------------------------------------" << endl;
    cout << "*******Choose one of the following options*******" << endl;
    cout << "(1) to Start " << endl << "(0) to end" << endl;
    cout << "-------------------------------------------------" << endl;
    cin>>choice;
    while (choice)
    {
        char uuu;
        char ccc;
        char c;
        cout << "-------------------------------------------------" << endl;
        cout << "Rock, Paper and Scissors Game! Feeling Excited!!!" << endl;
        cout << "*******Choose one of the following options*******" << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "(r) for rock " << endl
             << "(p) for paper" << endl
             << "(s) for scissors " << endl;
        cin >> c;
        while (c != 'r' && c != 'p' && c != 's')
        {
            cout << "Please enter one of the following options only. " << endl;
            cout << "(r) for rock " << endl
                 << "(p) for paper" << endl
                 << "(s) for scissors " << endl;
            cin >> c;
        }
        uuu = c;
        cout << "Your choice is: " << endl;
        if (uuu == 'r')
            cout << "Rock" << endl;
        if (uuu == 'p')
            cout << "Paper" << endl;
        if (uuu == 's')
            cout << "Scissors" << endl;
        srand(time(0));
        int num = rand() % 3 + 1;
        if (num == 1)
            ccc = 'r';
        if (num == 2)
            ccc = 'p';
        if (num == 3)
            ccc = 's';
        cout << "Computer's choice is: " << endl;
        if (ccc == 'r')
            cout << "Rock" << endl;
        if (ccc == 'p')
            cout << "Paper" << endl;
        if (ccc == 's')
            cout << "Scissors" << endl;
        if (uuu == ROCK && ccc == PAPER)
        {
            cout << "Computer Wins! Paper wraps Rock." << endl;
        }
        else if (uuu == PAPER && ccc == SCISSORS)
        {
            cout << "Computer Wins! Scissors cut Paper." << endl;
        }
        else if (uuu == SCISSORS && ccc == ROCK)
        {
            cout << "Computer Wins! Rock smashes Scissors." << endl;
        }
        else if (uuu == ROCK && ccc == SCISSORS)
        {
            cout << "You Win! Paper wraps Rock." << endl;
        }
        else if (uuu == PAPER && ccc == ROCK)
        {
            cout << "You Win! Paper wraps Rock." << endl;
        }
        else if (uuu == SCISSORS && ccc == PAPER)
        {
            cout << "You Win! Scissors cut Paper." << endl;
        }
        else
        {
            cout << "Tie. Play again win the Game." << endl;
        }
        cout<<endl;
        cout<<"______________________________________________________________________________"<<endl;
        cout << "*******Choose one of the following options*******" << endl;
        cout << "(1) to Start " << endl << "(0) to end" << endl;
        cout << "-------------------------------------------------" << endl;
        cin>>choice;
    }
    cout<<endl<<"______________THANKS FOR PLAYING____________";
    return 0;
}