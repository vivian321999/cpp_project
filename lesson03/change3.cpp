#include<iostream>
using namespace std;
int main(){
    //初始化
    int price = 0;
    int bill = 0;
    //读入金额和票面
    cout << "请输入金额：" << endl;
    cin >> price;
    cout << "请输入票面：" << endl;
    cin >> bill;
    //计算找零
    int change = bill - price;
    //输出找零
    cout << "找零为：" << change << endl;
    return 0;
}