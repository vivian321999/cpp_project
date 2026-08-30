#include <iostream>
using namespace std;
int main() {
    const int MINOR = 35;
    int age = 0;
    cout << "请输入年龄：" << endl;
    cin >> age;
    cout << "你输入的年龄是：" << age << endl;
    if (age < MINOR) {
        cout << "年轻是美好的," << endl;
    }
    cout << "年龄决定了你的精神世界，好好珍惜吧。" << endl;
    return 0;
}