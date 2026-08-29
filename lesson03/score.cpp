#include<iostream>
int main(){

    const int PASS=60;
    int score;
    printf("请输入成绩：");
    scanf("%d",&score);
    printf("你输入的成绩是：%d\n",score);
    if (score >= PASS){
        printf("恭喜你，成绩合格！\n");
        printf("再见！\n");
    } else {
        printf("很遗憾，成绩不合格！\n");   
    }
    return 0;
}