#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int first = 1;
    int i = 1;
    while (i < n) {
        int j = first;
        first *= 10;
        i++;
    }
    i = first;
    while (i < first * 10) {
        int t = i;
        int sum = 0;
        do {
            int d = t % 10;
            t /= 10;
            int p = 1;
            int j = 0;
            while (j < n) {
                p *= d;
                j++;
            }
            sum += p;
        } while (t > 0);
        if (sum == i) {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}
