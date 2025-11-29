#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    
    int user, comp;
    char play = 'y';

    while (play == 'y' || play == 'Y')
	{
        cout << "\n1. Rock\n2. Paper\n3. Scissors\n";
        cout << "Choose your option: ";
        cin >> user;

        comp = rand() % 3 + 1;

        cout << "Computer chose: " << comp << endl;

        if (user == comp) {
            cout << "It's a draw!\n";
        }
        else if ((user == 1 && comp == 3) ||
                 (user == 2 && comp == 1) ||
                 (user == 3 && comp == 2)) 
		{
            cout << "You win!\n";
        }
        else 
		{
            cout << "You lose!\n";
        }

        cout << "\nPlay again? (y/n): ";
        cin >> play;
    }

    cout << "Game Over!";
    return 0;
}

