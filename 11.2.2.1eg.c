//
// Created by 仇皓然 on 24-11-14.
//用格式赋%c输入或输出一个字符

#include <stdio.h>
int main(){
  char c[10];
  for(int i=0;i<10;i++){
    scanf("%c",&c[i]);
    printf("%c",c[i]);
  }
  return 0;
  }
