#include <cstdio>

int main() {
    int hour1, minute1; 
    int hour2, minute2;

    scanf("%d:%d", &hour1, &minute1);
    scanf("%d:%d", &hour2, &minute2);

    int time1 = hour1 * 60 + minute1;
    int time2 = hour2 * 60 + minute2;

    int diff = time2 - time1;
    if (diff < 0) {
        diff += 24 * 60; // 跨天
    }

    printf("时差是 %d 小时 %d 分钟\n", diff / 60, diff % 60);
    return 0;
}