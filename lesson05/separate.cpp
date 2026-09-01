#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int mask = 1;
    int t = x;
    while (t > 9) {
        mask *= 10;
        t /= 10;
    }
    cout << x << " " << mask << endl;
    do {
        int d = x / mask;
        cout << d;
        if (mask > 9) {
            cout << " ";
        }
        x %= mask;
        mask /= 10;
    } while (mask > 0);
    cout << endl;
    return 0;
}