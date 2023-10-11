#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int user = 0;
    int computer = 0;
    char name;
    cout <<endl<<endl<< "\t\t-----****Rock Paper Scissor Game****-----" << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissor" << endl;
    cout << "\nChoose one option : " ;
    cin >> user;

    if (user == 1)
    {
        cout << "\nYou choose Rock" << endl;
    }
    else if (user == 2)
    {
        cout << "\n You choose Paper" << endl;
    }
    else
    {
        cout << "\nYou choose Scissor" << endl;
    }

    computer = rand() % 3 + 1;
    if (computer == 1)
    {
        cout << "\nComputer chooses Rock" << endl;
    }
    else if (computer == 2)
    {
        cout << "\nComputer chooses Paper" << endl;
    }
    else
    {
        cout << "\nComputer chooses Scissor" << endl;
    }

    // match
    if (user == computer)
    {
        cout << "\n\t\t**Match Tie**\n\n\n" << endl;
    }
    // user --> Rock
    else if (user == 1)
    {
        if (computer == 2)
        {
            cout << "\n\t\t**You lose!**\n\n\n" << endl;
        }
        if (computer == 3)
        {
            cout << "\n\t\t----****You win!****----\n\n\n" << endl;
        }
    }
    // user --> Paper
    else if (user == 2)
    {
        if (computer == 1)
        {
            cout << "\n\t\t----****You win!****----\n\n\n" << endl;
        }
        if (computer == 3)
        {
            cout << "\n\t\t**You lose!**\n\n\n" << endl;
        }
    }
    // user --> Scissor
    else if (user == 3)
    {
        if (computer == 1)
        {
            cout << "\n\t\t**You lose!**\n\n\n" << endl;
        }
        if (computer == 2)
        {
            cout << "\n\t\t----****You win!****----\n\n\n" << endl;
        }
    }
    return 0;
}