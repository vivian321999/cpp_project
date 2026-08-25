#include <iostream>
using namespace std;
int main() {
   printf("请分别输入身高的英尺和英寸，"
          "例如输入 5 10 表示 5 英尺 10 英寸：");
    double feet = 0;
    double inch = 0;
    scanf("%lf %lf", &feet, &inch);
    printf("身高是%f米\n", feet * 0.3048 + inch * 0.0254);
    return 0;
}