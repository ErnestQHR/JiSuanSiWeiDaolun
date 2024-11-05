//
// Created by 仇皓然 on 24-10-24.
//输入一个学生的成绩，若大于或等于60时，printf语句写上passed；else是分数小于60的，printf上写failed

#include <stdio.h>
void judge(int a){
    if(a>=60)
      printf("passed");
    else
      printf("failed");
}
int main(){
     int socre;
     scanf("%d",&socre);
     judge(socre);
     return 0;
}
