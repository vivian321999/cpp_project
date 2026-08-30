#include<iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int n=0;
    while (x>0)
    {
        n++;
        x=x/10;
    }
    cout << n << endl;
    return 0;
}