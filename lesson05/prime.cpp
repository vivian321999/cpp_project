#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int i;
    int isPrime = 1;  // x是素数
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1) {
        cout << "是素数" << endl;
    } else {
        cout << "不是素数" << endl;
    }
    return 0;
}