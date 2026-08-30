#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    double amount = x * (1.0 + 0.05)*(1.0 + 0.05)*(1.0 + 0.05);
    cout << "本金为" << x << "元，三年后本息和为" << amount << "元" << endl;
}