#include <iostream>
using namespace std;
int main() {
    int type;
    cin >> type;
    switch (type) {
        case 1:
            cout << "You selected 1" << endl;
            break;
        case 2:
            cout << "You selected 2" << endl;
            break;
        case 3:
            cout << "You selected 3" << endl;
            break;
        default:
            cout << "You selected an invalid option" << endl;
    }
    return 0;
}