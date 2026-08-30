#include <iostream>
using namespace std;
int main() {
    int x;
    int n = 0;
    cin >> x;
    if (x > 999) {
        n = 4;
    } else if (x > 99) {
        n = 3;
    } else if (x > 9) {
        n = 2;
    } else {
        n = 1;
    }
    cout << n << endl;
}