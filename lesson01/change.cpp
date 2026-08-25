#include <iostream>
using namespace std;
int main() {
    int price = 0;
    printf("Please input the price: ");
    scanf("%d", &price);
    int change = 100 - price;
    printf("The change is: %d\n", change);
    return 0;
}