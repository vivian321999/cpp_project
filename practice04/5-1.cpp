#include <iostream>
using namespace std;
int main() {
    int divisor, dividend;
    cin >> dividend >> divisor;
    int a = dividend;
    int b = divisor;
    int t;
    while (b > 0) {
        t = a % b;
        a = b;
        b = t;
    }
    cout << dividend / a << " " << divisor / a << endl;
    return 0;
}