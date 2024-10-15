//了解逻辑运算符的使用
// Created by 仇皓然 on 24-10-15.

#include <stdio.h>
int main(){
  printf("%d\n", 3 == 5 && 3 < 5);//两者都为真则为1
  printf("%d\n", 3 == 5 || 3 < 5);//二者满足其一则为1
  printf("%d\n", !0 );//不为假返回1
  return 0;
}
//逻辑运算先将两边的值转化为bool，再执行他们的逻辑判断，最后得到的值为bool值