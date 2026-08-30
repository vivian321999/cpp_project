#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int digit;
    int ret = 0;
    while (x > 0) {
        digit = x % 10;
        // cout << digit;
        ret = ret * 10 + digit;
        // cout << x << digit << ret << endl;
        x /= 10;
    }
    cout << ret << endl;
}