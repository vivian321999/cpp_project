#include <iostream>
using namespace std;
int main() {
    int m, n;
    int i;
    int cnt = 0;
    int sum = 0;
    cin >> m >> n;
    if (m == 1) m++;
    for (i = m; i <= n; i++) {
        int isPrime = 1;
        int k;
        for (k = 2; k < i - 1; k++) {
            if (i % k == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            cnt++;
            sum += i;
        }
    }
    cout << "Sum: " << sum << ", Count: " << cnt << endl;
    return 0;
}