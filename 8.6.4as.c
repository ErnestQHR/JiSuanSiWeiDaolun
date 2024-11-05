//
// Created by 仇皓然 on 24-10-22.
//要求从键盘中输入一个整数n，然后求1到n的和，写出函数

#include <stdio.h>
int sum(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
      sum += i;
      }
      return sum;
}
int main(){
  int n;
  scanf("%d", &n);
  printf("%d", sum(n));
  return 0;
}
