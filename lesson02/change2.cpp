#include <iostream>
using namespace std;
int main() {
    const int AMOUNT = 100;
    int price = 0;
    cout << "Please input the price: " << endl;
    cin >> price;
    int change = AMOUNT - price;
    cout << "The change is: " << change << endl;
    return 0;
}