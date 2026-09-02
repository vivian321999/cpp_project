#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    if (x < 0) {
        cout << "fu" << endl;
        x = -x;
    }
    int mask = 1;
    int t = x;
    while (t > 9) {
        t /= 10;
        mask *= 10;
    }
    while (mask > 0) {
        int d = x / mask;
        switch (d) {
            case 0:
                cout << "ling" << endl;
                break;
            case 1:
                cout << "yi" << endl;
                break;
            case 2:
                cout << "er" << endl;
                break;
            case 3:
                cout << "san" << endl;
                break;
            case 4:
                cout << "si" << endl;
                break;
            case 5:
                cout << "wu" << endl;
                break;
            case 6:
                cout << "liu" << endl;
                break;
            case 7:
                cout << "qi" << endl;
                break;
            case 8:
                cout << "ba" << endl;
                break;
            case 9:
                cout << "jiu" << endl;
                break;
        }
        if (mask > 9) {
            cout << " " << endl;
        }
        x %= mask;
        mask /= 10;
    }
    return 0;
}