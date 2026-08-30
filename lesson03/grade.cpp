#include <iostream>
using namespace std;
int main() {
    cout << "Enter your grade: " << endl;
    int grade;
    cin >> grade;
    grade = grade / 10;
    switch (grade) {
        case 10:
        case 9:
            cout << "A" << endl;
            break;
        case 8:
            cout << "B" << endl;
            break;
        case 7:
            cout << "C" << endl;
            break;
        case 6:
            cout << "D" << endl;
            break;
        default:
            cout << "F" << endl;
    }
    return 0;
}