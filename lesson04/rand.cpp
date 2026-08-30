#include <ctime>
#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    int x = rand() % 100;
    cout << x << endl;
    return 0;
}