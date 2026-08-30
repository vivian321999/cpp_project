#include <ctime>
#include <iostream>
using namespace std;
int main() {
    int number = rand() % 100 + 1;
    int count = 0;
    int a = 0;
    cout << "Please guess a number between 1 and 100: ";
    do {
        cout << "Enter your guess: ";
        cin >> a;
        count++;
        if (a < number) {
            cout << "Too low!" << endl;
        } else if (a > number) {
            cout << "Too high!" << endl;
        }
        count++;
    } while (a != number);
    cout << "Congratulations! You guessed the number in " << count << " attempts." << endl;
    return 0;
}