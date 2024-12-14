#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    string choices[3] = {"Rock", "Paper", "Scissors"};
    int userChoice, computerChoice;

    cout << "Rock, Paper, Scissors Game!" << endl;
    cout << "Enter your choice: (0) Rock, (1) Paper, (2) Scissors: ";
    cin >> userChoice;

    if (userChoice < 0 || userChoice > 2) {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    computerChoice = rand() % 3;
    cout << "Computer chose: " << choices[computerChoice] << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }

    return 0;
}
