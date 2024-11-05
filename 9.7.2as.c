//输入一个正整数，判读这个数是不是奇数
// Created by 仇皓然 on 24-10-24.

#include <stdio.h>

void judge(int a){
     if(a % 2 == 0){
       printf("%d is even", a);
     }else{
       printf("%d is odd", a);
     }
     }
int main(){
    int a;
    scanf("%d",&a);
    judge(a);
    return 0;
    }


