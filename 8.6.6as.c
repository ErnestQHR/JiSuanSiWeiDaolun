//
// Created by 仇皓然 on 24-10-22.
//要求从1到100的整数作为分数，若分数小于60不合格，否则输出合格用函数实现

#include <stdio.h>

void check(int score){
  if(score < 60){
     printf("对不起，你不合格");
  }    else printf("恭喜你，你合格了");
        }

int main(){
     int score;
     scanf("%d",&score);
     check(score);
     return 0;
}