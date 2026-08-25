#include <iostream>
int main() {
    int x;
    scanf("%d", &x);
    double amount = x * (1.0 + 0.05)*(1.0 + 0.05)*(1.0 + 0.05);
    printf("本金为%d元，三年后本息和为%f元\n", x, amount);
}