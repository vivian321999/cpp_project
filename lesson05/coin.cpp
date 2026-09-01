#include <iostream>
using namespace std;

int main() {
    int x;
    int one, two, five;
    cin >> x;
    for (one = 1; one < x * 10; one++) {
        for (two = 1; two < x * 10 / 2; two++) {
            for (five = 1; five < x * 10 / 5; five++) {
                if (one + two * 2 + five * 5 == x * 10) {
                    cout << "可以用" << one << "个一角加" << two << "个两角加" << five
                         << "个五角凑成" << x << "元" << endl;
                }
            }
        }
    }

    return 0;
}