#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int hour1, minute1;
    int hour2, minute2;

    cin >> hour1 >> minute1;
    cin >> hour2 >> minute2;

    int time1 = hour1 * 60 + minute1;
    int time2 = hour2 * 60 + minute2;

    int diff = time2 - time1;
    if (diff < 0) {
        diff += 24 * 60;  // 跨天
    }

    cout << "时差是 " << diff / 60 << " 小时 " << diff % 60 << " 分钟" << endl;
    return 0;
}