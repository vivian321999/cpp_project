#include <iostream>
using namespace std;
int main() {
    int a, b;
    int min;
    cin >> a >> b;
    if (a < b) {
        min = a;
    } else {
        min = b;
    }
    int ret = 0;
    int i;
    for (i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            ret = i;
        }
    }
    cout << ret << endl;
    return 0;
}