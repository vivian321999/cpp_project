#include <iostream>
using namespace std;
int main() {
    int n;
    int i;
    double ret = 0.0;
    int sign = 1;
    cin >> n;
    for (i = 1; i <= n; i++) {
        ret += sign * 1.0 / i;
        sign *= -1;
    }
    cout << ret << endl;
    return 0;
}