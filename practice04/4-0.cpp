#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int i, j, k;
    int cnt = 0;
    i = a;
    while (i <= a + 3) {
        j = a;
        while (j <= a + 3) {
            k = a;
            while (k <= a + 3) {
                if (i != j && j != k && i != k) {
                    cnt++;
                    cout << i << j << k;
                    if (cnt == 6) {
                        cout << endl;
                        cnt = 0;
                    } else {
                        cout << " ";
                    }
                }
                k++;
            }
            j++;
        }
        i++;
    }
    return 0;
}