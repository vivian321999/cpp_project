#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout << "请输入三个整数：" << endl;
    cin >> a >> b >> c;
    int max = a;
    if (b > max){
        max = b;
    }
    if (c > max){
        max = c;
    }
    cout << "三个数中最大的是：" << max << endl;
    return 0;
}