#include <iostream>
using namespace std;
int main() {
    int n;
    double dividend, divisor;
    double sum = 0.0;
    int i;
    double t;

    cin >> n;
    dividend = 2;
    divisor = 1;
    for (i = 1; i <= n; i++) {
        sum += dividend / divisor;
        t = dividend;
        dividend = dividend + divisor;
        divisor = t;
    }
    cout << dividend << " " << divisor << endl;
    cout << sum << endl;
    return 0;
}