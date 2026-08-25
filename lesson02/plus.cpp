#include <iostream>
using namespace std;
int main() {
    int a = 0;
    int b = 0;
    printf("Please input two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    return 0;
}