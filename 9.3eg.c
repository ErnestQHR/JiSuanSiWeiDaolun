//
// Created by 仇皓然 on 24-10-22.
//
#include <stdio.h>

int main(){
    int score;
    printf("Please enter your score: ");
    scanf("%d",&score);
    if(score<60){
      printf("每天洗碗");
      }
    else if(score < 90){
      printf("买新球鞋");
}
    else printf("买电脑");

      return 0;
}