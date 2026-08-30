#include <iostream>
using namespace std;
int main() {
    int number;
    int sum = 0;
    int count = 0;
    cin >> number;
    while (number != -1) {
        sum += number;
        count++;
        cin >> number;
    }
    double dsum = sum;
    double average = dsum / count;
    cout << "The average is: " << average << endl;
    return 0;
}