#include <iostream>
using namespace std;
int main() {
    int n;
    int i;
    double ret = 0.0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        ret += 1.0 / i;
    }
    cout << ret << endl;
    return 0;
}