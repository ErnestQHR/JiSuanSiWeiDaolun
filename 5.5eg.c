//了解赋值运算符的使用
// Created by 仇皓然 on 24-10-15.

#include <stdio.h>

int main(){
  int a,b;
  a = b = 5;
  a += b;
  printf("%d\n",a);

  a -= b;
  printf("%d\n",a);

  a *= b;
  printf("%d\n",a);

  a /= b;
  printf("%d\n",a);

  a %= b;
  printf("%d\n",a);

  return 0;



}
