#include<iostream>
using namespace std;
int main(){

    const double RATE = 8.25;
    const int STANDARD = 40;
    double pay = 0.0;
    int hours;

    cout << "请输入工作小时数：" << endl;
    cin >> hours;
    cout << endl;
    if (hours <= STANDARD){
        pay = hours * RATE;
    } else {
        pay = STANDARD * RATE + (hours - STANDARD) * RATE * 1.5;
    }
    cout << "工资为：" << pay << endl;

    return 0;
}