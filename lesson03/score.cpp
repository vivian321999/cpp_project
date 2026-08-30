#include<iostream>
using namespace std;
int main(){

    const int PASS=60;
    int score;
    cout << "请输入成绩：" << endl;
    cin >> score;
    cout << "你输入的成绩是：" << score << endl;
    if (score >= PASS){
        cout << "恭喜你，成绩合格！" << endl;
        cout << "再见！" << endl;
    } else {
        cout << "很遗憾，成绩不合格！" << endl;
    }
    return 0;
}