//strcpy是string copy的缩写
// Created by 仇皓然 on 24-11-14.
//strcpy的作用是把字符串2复制到字符数组里去。

#include <stdio.h>
#include<string.h>
int main(){
  char name1[16]={"hello,"};
  char name2[]={"world"};
  strcpy(name1,name2);//复制过后2的内容会覆盖掉一的内容
  printf("%s\n",name1);
  return 0;
}

