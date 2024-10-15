//强制类型转换
// Created by 仇皓然 on 24-10-15.
#include <stdio.h>
int main(){
  float x =3.6;
  int y;
  y =(int)x;//将x转为int类型并赋值给y
  printf("x is %f\n",x);
  printf("y = %d\n",y);
  return 0;
}
//将小数直接转换为整数时不会四舍五入
//而是直接获取整数部分
