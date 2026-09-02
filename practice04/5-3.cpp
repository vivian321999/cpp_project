#include <iostream>
using namespace std;
int main() {
    int a, n;
    cin >> a >> n;
    int sum = 0;
    int i;
    int t = 0;

    for (int i = 0; i < n; i++) {
        t = t * 10 + a;
        sum += t;
    }
    cout << sum << endl;
    return 0;
}