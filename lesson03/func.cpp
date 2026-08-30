#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int f = 0;
    if (x < 0) {
        f = -1;
    } else if (x == 0) {
        f = 0;
    } else if (x > 5) {
        f = 2 * x;
    } else {
        f = 3 * x;
    }
    cout << f << endl;
    return 0;
}