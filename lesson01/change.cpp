#include <iostream>
using namespace std;
int main() {
    int price = 0;
    cout << "Please input the price: " << endl;
    cin >> price;
    int change = 100 - price;
    cout << "The change is: " << change << endl;
    return 0;
}