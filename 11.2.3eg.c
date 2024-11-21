//strcat 函数使用
// Created by 仇皓然 on 24-11-14.
//strcat=string catenate 连接字符串的
#include <stdio.h>
#include <string.h>
int main(){
  char name1[16]={"hello, "};
  char name2[]={"world"};
  strcat(name1,name2);
  printf("%s\n",name1);//strcat把2接到1里面去了
  return 0;
}