//一维数组的应用和初始化
// Created by 仇皓然 on 24-11-14.

#include <stdio.h>
int main(){
  int a[5];
  a[0]=36;
  printf("赋值后：a[0]=%d\n",a[0]);
  a[1]=a[0]/2;
  printf("赋值后：a[1]=%d\n",a[1]);
  a[2]=a[0]+a[1];
  printf("赋值后：a[2]=%d\n",a[2]);
  return 0;
}
