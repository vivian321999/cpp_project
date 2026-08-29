#include<iostream>
int main(){

    const double RATE = 8.25;
    const int STANDARD = 40;
    double pay = 0.0;
    int hours;

    printf("请输入工作小时数：");
    scanf("%d",&hours);
    printf("\n");
    if (hours <= STANDARD){
        pay = hours * RATE;
    } else {
        pay = STANDARD * RATE + (hours - STANDARD) * RATE * 1.5;
    }
    printf("工资为：%.2f\n",pay);

    return 0;
}