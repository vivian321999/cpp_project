#include <iostream>
using namespace std;
int main() {
    const int AMOUNT = 100;
    int price = 0;
    printf("Please input the price: ");
    scanf("%d", &price);
    int change = AMOUNT - price;
    printf("The change is: %d\n", change);
    return 0;
}