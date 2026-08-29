#include<iostream>
int main(){

    int a,b,c;
    printf("请输入三个整数：");
    scanf("%d %d %d",&a,&b,&c);
    int max = a;
    if (b > max){
        max = b;
    }
    if (c > max){
        max = c;
    }
    printf("三个数中最大的是：%d\n",max);
    return 0;
}