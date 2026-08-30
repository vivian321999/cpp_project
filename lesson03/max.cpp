#include<iostream>
using namespace std;
int main(){

    int a, b;
    cout << "请输入两个整数：" << endl;
    cin >> a >> b;
    int max= b;
    if (a > b){
        max = a;    
}
    cout << "两个数中较大的是：" << max << endl;
    return 0;
}