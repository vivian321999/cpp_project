#include <iostream>
using namespace std;

int main() {
    int target;
    int maxGuesses;
    cin >> target >> maxGuesses;

    for (int guesses = 1; guesses <= maxGuesses; guesses++) {
        int guess;
        cin >> guess;

        if (guess < 0) {
            cout << "Game Over" << endl;
            return 0;
        }

        if (guess > target) {
            cout << "Too big" << endl;
        } else if (guess < target) {
            cout << "Too small" << endl;
        } else {
            if (guesses == 1) {
                cout << "Bingo!" << endl;
            } else if (guesses <= 3) {
                cout << "Lucky You!" << endl;
            } else {
                cout << "Good Guess!" << endl;
            }
            return 0;
        }
    }

    cout << "Game Over" << endl;
    return 0;
}
