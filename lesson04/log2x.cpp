#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int ret = 0;
    int t = x;
    while (x > 1) {
        x = x / 2;
        ret++;
    }
    cout << "log2 of " << t << " is " << ret << endl;
    return 0;
}
