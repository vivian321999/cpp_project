#include <iostream>
using namespace std;
int main() {
   cout << "请分别输入身高的英尺和英寸，"
           "例如输入 5 10 表示 5 英尺 10 英寸：" << endl;
    double feet = 0;
    double inch = 0;
    cin >> feet >> inch;
    cout << "身高是" << feet * 0.3048 + inch * 0.0254 << "米" << endl;
    return 0;
}