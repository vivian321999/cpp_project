#include <iostream>
using namespace std;
int main() {
    int x;
    int cnt = 0;
    x = 1;
    while (cnt < 50) {
        int i;
        int isPrime = 1;
        for (i = 2; i < x; i++) {
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            cnt++;
            cout << x << endl;
            if (cnt % 5 == 0) {
                cout << "\n" << endl;
            }
        }
        x++;
    }
    return 0;
}